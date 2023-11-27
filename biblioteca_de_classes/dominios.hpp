#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include "auxiliar.hpp"

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

// Autor: 221006431

/// @brief Padrão para palavra-chave secreta
/// @note Regras do formato:\n
/// Formato: XXXXX\n
/// "X" é: letra (A-Z,a-z), dígito (0-9), pontuação(',',';','.','?','!') ou espaço em branco.\n
/// Não há caracteres duplicaos\n
/// Há pelo menos uma ocorrência de cada tipo de 'X'.

class Senha {
    private:
        string senha;
        void validar(string);
    public:
        /// Armazena uma string caso o formato seja válido\n
        /// Lança exceção caso contrário.
        /// @param string
        /// @throw invalid_argument
        void setValor(string);
        /// Obtém o valor da váriavel senha.
        /// @return string senha.
        string getValor();
};

inline string Senha::getValor() {
    return senha;
}

// Autor: 211038217

/// @brief Padrão para informação em forma de caracteres
/// @note Regras do formato:\n
/// 5 a 30 Caracteres.\n
/// Cada caractere é letra (A-Z,a-z),digito,sinal de pontuação(.,;?!) ou espaço em branco.\n
/// Não há espaços em branco em sequência.\n
/// Não há sinais de pontuação em sequência.\n
/// Não há acentuação.\n
/// Primeiro caractere é letra maiúscula.\n
/// Primeiro caractere após sinal de pontuação (exceto vírgula ou ponto-e-vírgula) é letra maiúscula.\n

class Texto {
    private:
        string texto;
        void validar (string);
    public:
        /// Armazena uma string caso o formato seja válido.\n
        /// Lança exceção caso o formato não sejá válido.
        ///@param string texto
        ///@throw invalid_argument
        void setValor(string);
        /// Obtém uma string com o valor de texto
        /// @return string texto
        string getValor();
};

inline string Texto::getValor() {
    return texto;
}


// Autor: 211068790

/// @brief Padrão para representação de um identificador único de algo.
/// @note Regras de formato:
/// O código fornecido é válido se obedecer o formato LLDD,
/// em que L é letra maiúscula (A - Z) e D é dígito (0 – 9).

class Codigo {
 private:
    string codigo;
    void validar(string);

 public:
///
/// Obtém o valor da variável codigo
///
/// @return código
///
    string getValor() const;
///
/// Armazena código caso seja válido.\n
/// Lança exceção caso código informado seja inválido.
///
/// @param codigo
/// @throw invalid_argument
///
    void setValor(string);
};

inline string Codigo::getValor() const {
  return codigo;
}

/// @brief Padrão para representação de uma coletânea de tarefas de acordo com seu estado de execução.\n
/// @note Regras de formato:\n
/// O código fornecido é válido se for um dos seguintes nomes:
/// "SOLICITADO", "EM EXECUCAO" ou "CONCLUIDO".

class Coluna {
 private:
    string coluna;
    void validar(string);

 public:
///
/// Obtém código referente à variável coluna
///
/// @return coluna
///
    string getValor() const;
///
/// Armazena código caso seja válido.\n
/// Lança exceção caso código informado seja inválido.
///
/// @param coluna
/// @throw invalid_argument
///
    void setValor(string);
};
inline string Coluna::getValor() const {
  return coluna;
}

/// @brief Padrão para representação de um número que define uma quantidade máxima de algo.
/// @note Regras de formato:
/// O código fornecido é válido se representar um dos seguintes valores:\n
/// 5, 10, 15 ou 20.


class Limite {
 private:
    static const string LIMITE;
    string limite;
    void validar(string);

 public:
/// Obtém o valor da variável limite
///
/// @return limite
///
    string getValor() const;
///
/// Armazena código caso seja válido.\n
/// Lança exceção caso código informado seja inválido.\n
///
/// @param limite
/// @throw invalid_argument
///
    void setValor(string);
};

inline string Limite::getValor() const {
  return limite;
}

// Autor: 200069306

/// @brief Padrão para representação de um identificador de acesso do usuário
/// @note Regras do Formato:\n
/// Formato: nome@dominio\n
/// nome é composto por 2 a 10 caracteres.\n
/// dominio é composto por 2 a 20 caracteres.\n
/// Cada caractere é letra (A-Z ou a-z), dígito (0-9) ou ponto (.).\n
/// Caractere @ não pode ser imediatamente precedido ou sucedido por ponto (.).\n
/// Não há pontos (.) em sequência.
class Email {
    private:
        string email;
        void validar (string);
        static const int LIMITEMIN = 2;
        static const int LIMITEMAXNOME = 10;
        static const int LIMITEMAXDOM = 20;
    public:
    /// Armazena email caso o formato seja válido.\n
    /// Lança exceção caso formato informado seja inválido.\n
    ///
    /// @param email
    /// @throw invalid_argument
        void setValor(string);
    /// Obtém o valor da variável email
    ///
    /// @return email
    ///
        string getValor();
};

inline string Email::getValor(){
    return email;
}

#endif // DOMINIOS_H_INCLUDED
