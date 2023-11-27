#include "dominios.hpp"
#include <vector>

////// Métodos da classe Senha ///////

void Senha::validar(string senha) {
    bool temMinuscula = false;
    bool temMaiuscula = false;
    bool temNumero = false;
    bool temEspecial = false;

    if (senha.length() != 5)
    throw invalid_argument("Valor invalido");

    for (int i = 0; i < senha.length() - 1; i++){
        for (int j = i + 1; j < senha.length(); j++){
            if (senha[i] == senha[j])
                throw invalid_argument("Valor invalido");
        }
    }
    
    for (int i = 0; i < senha.length(); i++){
        char charAtual = senha[i];
    if (ChecaCaractere::e_maiuscula_sem_acento(charAtual) == true)
        temMaiuscula = true;
    else if (ChecaCaractere::e_minuscula_sem_acento(charAtual) == true)
        temMinuscula = true;
    else if (ChecaCaractere::e_digito(charAtual) == true)
        temNumero = true;
    else if (ChecaCaractere::e_pontuacao(charAtual) == true)
        temEspecial = true;
    else
        throw invalid_argument("Caractere invalido");
    }

    if (!(temMaiuscula && temMinuscula && temNumero && temEspecial))
        throw invalid_argument("Valor invalido");
}

void Senha::setValor(string senha) {
    validar(senha);
    this ->senha = senha;
}

///////////  Métodos da Classe Texto  ///////////

void Texto::validar(string texto) {
    if (texto.length() < 5 || texto.length() > 30) {
        throw invalid_argument("Tamanho inválido");
    }

    if (!(ChecaCaractere::e_maiuscula_sem_acento(texto[0]))) {
        throw invalid_argument("Primeira Letra Minúscula");
    }

    for (int currPos = 1; currPos < texto.length(); currPos++) {
        char Char_Atual = texto[currPos];
        bool FormatoValido = false;

        if (ChecaCaractere::e_maiuscula_sem_acento(Char_Atual)) {
            FormatoValido = true;

        } else if (ChecaCaractere::e_minuscula_sem_acento(Char_Atual)) {
            FormatoValido = true;

        } else if (ChecaCaractere::e_digito(Char_Atual)) {
            FormatoValido = true;

        } else if (ChecaCaractere::e_pontuacao(Char_Atual)) {
            FormatoValido = true;
            // Verificação do caractere seguido à pontuação.
            // Não faz sentido checar a última posição.
            if (currPos < texto.length() - 1) {
                char ProximoCaractere = texto[currPos + 1];
                if (ChecaCaractere::e_pontuacao(ProximoCaractere)) {
                    throw invalid_argument("Pontuação em Seguida");
                }
                if (Char_Atual != ',' && Char_Atual != ';' &&
                !ChecaCaractere::e_maiuscula_sem_acento(ProximoCaractere)) {
                    throw invalid_argument("Combinação inválida");
                }
            }

        } else if (ChecaCaractere::e_embranco(Char_Atual)) {
            FormatoValido = true;
            // Verificação de espaços em sequência.
            //Não faz sentido checar a última posição.
            if (currPos < texto.length() - 1) {
                char ProximoCaractere = texto[currPos + 1];
                if (ChecaCaractere::e_embranco(ProximoCaractere)) {
                    throw invalid_argument("Espaços Em sequência");
                }
            }
        }
        if (!FormatoValido) {
            throw invalid_argument("Formato de Caractere inválido");
        }
    }
}

void Texto::setValor(string texto) {
    validar(texto);
    this->texto = texto;
}

////// Métodos da classe Limite ///////

void Limite::validar(string limite) {
    if (limite != "5"
    &&  limite != "10"
    &&  limite != "15"
    &&  limite != "20") 
        throw invalid_argument("Limite inválido.");
}

void Limite::setValor(string limite) {
    validar(limite);
    this->limite = limite;
}

////// Métodos da classe Coluna ///////

void Coluna::validar(string coluna) {
    if (coluna != "SOLICITADO" && coluna != "EM EXECUCAO" &&
                                  coluna != "CONCLUIDO") {
        throw invalid_argument("Coluna inválida.");
    }
}

void Coluna::setValor(string coluna) {
    validar(coluna);
    this->coluna = coluna;
}

////// Métodos da classe Codigo ///////

void Codigo::validar(string codigo) {
    if (codigo.length() != 4) {
        throw invalid_argument("Tamanho de código inválido.");
    } else if (!(ChecaCaractere::e_maiuscula_sem_acento(codigo[0])) ||
               !(ChecaCaractere::e_maiuscula_sem_acento(codigo[1])) ||
               !(ChecaCaractere::e_digito(codigo[2])) ||
               !(ChecaCaractere::e_digito(codigo[3]))) {
        throw invalid_argument("Formato de código inválido.");
    }
}

void Codigo::setValor(string codigo) {
    validar(codigo);
    this->codigo = codigo;
}


////// Métodos da classe Email ///////

void Email::validar(string email){
    char ponto = '.';
    char arroba = '@';

    int pos = email.find("..");
    if (pos != -1)
        throw invalid_argument("Caractere invalido");

    pos = email.find_first_of(arroba);
    if (pos == -1)
        throw invalid_argument("Formato invalido");
    else if (email[pos-1] == ponto || email[pos+1] == ponto)
        throw invalid_argument("Formato invalido");

    string nome = email.substr(0,pos);
    string dominio = email.substr(pos+1);

    pos = dominio.find(arroba);
    if (pos != -1)
        throw invalid_argument("Caractere invalido");

    if (nome.length() < LIMITEMIN || nome.length() > LIMITEMAXNOME)
        throw invalid_argument("Nome invalido");
    if (dominio.length() < LIMITEMIN || dominio.length() > LIMITEMAXDOM)
        throw invalid_argument("Dominio invalido");

    for (int i = 0; i < email.length(); i++){
        char charAtual = email[i];
        char charPosterior = email[i+1];

        if((ChecaCaractere::e_maiuscula_sem_acento(charAtual) == false)
        && (ChecaCaractere::e_minuscula_sem_acento(charAtual) == false)
        && (ChecaCaractere::e_digito(charAtual) == false)
        && (ChecaCaractere::caractere_especial_email(charAtual) == false))
            throw invalid_argument("Caractere invalido");
    }
}

void Email::setValor(string email){
    validar(email);
    this->email = email;
}
