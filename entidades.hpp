#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.hpp"
#include <string>

using namespace std;
// Autor: 200069306

/// @brief Padrão para representação de um quadro Kanban
class Quadro {
    private:
        Codigo codigo;
        Texto nome;
        Texto descricao;
        Limite limite;
    public:
        /// Armazena representação de um identificador alfanumérico para o quadro.
        /// @param Codigo
        void setCodigo(const Codigo&);
        /// Obtém o identificador do quadro.
        /// @return Codigo
        Codigo getCodigo()const;
        /// Armazena uma representação nominal.
        /// @param Texto
        void setNome(const Texto&);
        /// Obtém o nome do quadro.
        /// @return Texto
        Texto getNome() const;
        /// Armazena uma representação textual da finalidade do quadro.
        /// @param Texto
        void setDescricao(const Texto&);
        /// Obtém a descrição do quadro
        /// @return Texto
        Texto getDescricao() const;
        /// Armazena uma representação de uma quantidade máxima de Cartões.
        /// @param Limite
        void setLimite(const Limite&);
        /// Obtém uma representação da quantidade máxima
        /// @return Limite
        Limite getLimite() const;
};

inline void Quadro::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}

inline Codigo Quadro::getCodigo() const {
    return codigo;
}

inline void Quadro::setNome(const Texto& nome){
    this->nome = nome;
}

inline Texto Quadro::getNome() const {
    return nome;
}

inline void Quadro::setDescricao(const Texto& descricao){
    this->descricao = descricao;
}

inline Texto Quadro::getDescricao() const {
    return descricao;
}

inline void Quadro::setLimite(const Limite& limite){
    this->limite = limite;
}

inline Limite Quadro::getLimite() const {
    return limite;
}

// Autor: 200069306
/// @brief Padrão para representação de um cartão Kanban.
class Cartao {
    private:
        Codigo codigo;
        Texto nome;
        Texto descricao;
        Coluna coluna;
    public:
        /// Armazena representação de um identificador alfanumérico para o cartão.
        /// @param Codigo
        void setCodigo(const Codigo&);
        /// Obtém o identificador do cartão.
        /// @return Codigo
        Codigo getCodigo()const;
        /// Armazena uma representação nominal.
        /// @param Texto
        void setNome(const Texto&);
        /// Obtém o nome do cartão.
        /// @return Texto
        Texto getNome() const;
        /// Armazema uma representação textual da finalidade do cartão.
        /// @param Texto
        void setDescricao(const Texto&);
        /// Obtém a descrição do cartão
        /// @return Texto
        Texto getDescricao() const;
        /// Armazena a representação de status de uma tarefa descrita no cartão.
        /// @param Coluna
        void setColuna(const Coluna&);
        /// Obtém o status do cartão
        /// @return Coluna
        Coluna getColuna() const;
};

inline void Cartao::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}

inline Codigo Cartao::getCodigo() const {
    return codigo;
}

inline void Cartao::setNome(const Texto& nome){
    this->nome = nome;
}

inline Texto Cartao::getNome() const {
    return nome;
}

inline void Cartao::setDescricao(const Texto& descricao){
    this->descricao = descricao;
}

inline Texto Cartao::getDescricao() const {
    return descricao;
}

inline void Cartao::setColuna(const Coluna& coluna){
    this->coluna = coluna;
}

inline Coluna Cartao::getColuna() const {
    return coluna;
}

// Autor: 211068790
/// @brief Padrão para representação de uma conta de usuário.
class Conta {
  private:
    Email email;
    Texto nome;
    Senha senha;
  public:
    /// Armazena uma representação de email
    /// @param Email
    void setEmail(const Email&);
    /// Obtém o email da conta correspondente
    /// @return Email
    Email getEmail() const;
    /// Armazena uma representação nominal.
    /// @param Texto
    void setNome(const Texto&);
    /// Obtém o nome do cartão.
    /// @return Texto
    Texto getNome() const;
    /// Armazena palavra-chave para acesso a uma conta
    /// @param Senha
    void setSenha(const Senha&);
    /// Obtém a palavra-chave de acesso desta conta.
    /// @return Senha
    Senha getSenha() const;
};

inline void Conta::setEmail(const Email& email) {
    this->email = email;
}

inline Email Conta::getEmail() const {
    return email;
}

inline void Conta::setNome(const Texto& nome) {
    this->nome = nome;
}

inline Texto Conta::getNome() const {
    return nome;
}

inline void Conta::setSenha(const Senha& senha) {
    this->senha = senha;
}

inline Senha Conta::getSenha() const {
    return senha;
}


#endif // ENTIDADES_H_INCLUDED
