#include "auxiliar.hpp"

int ChecaCaractere::caractere_ascii = 0;
char ChecaCaractere::sinais_de_pontuacao[5] = {';', ',', '.', '!', '?'};

bool ChecaCaractere::e_maiuscula_sem_acento(char caractere) {
    caractere_ascii = static_cast<int>(caractere);
    if (caractere_ascii < 65 || caractere_ascii > 90) {
        return false;
    }
    return true;
}

bool ChecaCaractere::e_minuscula_sem_acento(char caractere) {
    caractere_ascii = static_cast<int>(caractere);
    if (caractere_ascii < 97 || caractere_ascii > 122) {
        return false;
    }
    return true;
}

bool ChecaCaractere::e_pontuacao(char caractere) {
    for (char sinal : sinais_de_pontuacao) {
        if (caractere == sinal) {
            return true;
        }
    }
    return false;
}

bool ChecaCaractere::e_digito(char caractere) {
    caractere_ascii = static_cast<int>(caractere);
    if (caractere_ascii < 48 || caractere_ascii > 57) {
        return false;
    }
        return true;
}

bool ChecaCaractere::e_embranco(char caractere) {
    if (caractere == ' ') {
        return true;
    }
    return false;
}

bool ChecaCaractere::caractere_especial_email(char caractere) {
    caractere_ascii = int(caractere);
    if (caractere_ascii != '.' && caractere_ascii != '@')
        return false;
    return true;
}
