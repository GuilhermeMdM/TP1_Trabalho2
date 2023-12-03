#ifndef CNTRAPRESENTACAO_H_INCLUDED
#define CNTRAPRESENTACAO_H_INCLUDED

#include <conio.h>
#include <iostream>
#include <string.h>

#include "biblioteca_de_classes/dominios.hpp"
#include "biblioteca_de_classes/entidades.hpp"
#include "auxiliar.hpp"
#include "interfaces.hpp"
#include <limits>

#define CLR_SCR system("cls");

using namespace std;

//Autor: 211068790
class CntrApresentacaoInicializacao{
    private:
        Email email;
        IApresentacaoAutenticacao *cntrIApresentacaoAutenticacao;
        IApresentacaoControle *cntrIApresentacaoControle;
        IApresentacaoProjetos *cntrIApresentacaoProjetos;
    public:
        void executar();
        void setCntrIApresentacaoAutenticacao(IApresentacaoAutenticacao*);
        void setCntrIApresentacaoControle(IApresentacaoControle*);
        void setCntrIApresentacaoProjetos(IApresentacaoProjetos*);
};

inline void CntrApresentacaoInicializacao::setCntrIApresentacaoAutenticacao(IApresentacaoAutenticacao *cntr){
    cntrIApresentacaoAutenticacao = cntr;
}

inline void CntrApresentacaoInicializacao::setCntrIApresentacaoControle(IApresentacaoControle *cntr){
    cntrIApresentacaoControle = cntr;
}

inline void CntrApresentacaoInicializacao::setCntrIApresentacaoProjetos(IApresentacaoProjetos *cntr){
    cntrIApresentacaoProjetos = cntr;
}

//Autor: 221006431
class CntrApresentacaoAutenticacao:public IApresentacaoAutenticacao{
    private:
        IServicoAutenticacao* cntr;
    public:
        bool autenticar(Email*);
        void setCntrServicoAutenticacao(IServicoAutenticacao*);
};

inline void CntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao *cntr){
    this->cntr = cntr;
};


//Autor: 221006431
class CntrApresentacaoControle: public IApresentacaoControle{
    private:
        IServicoControle* cntr;
        Email email;
        Conta conta;
    public:
        void executar(Email);
        void setCntrServicoControle(IServicoControle*);
        void cadastrar();
};

inline void CntrApresentacaoControle::setCntrServicoControle(IServicoControle* cntr){
    this->cntr = cntr;
};

class CntrApresentacaoProjetos: public IApresentacaoProjetos{
    private:
        IServicoProjetos* cntr;
        Email email;
        Conta conta;
        Quadro quadro;
        Cartao cartao;
        Coluna coluna;
    public:
        void executar(Email);
        void setCntrServicoProjetos(IServicoProjetos*);
};

inline void CntrApresentacaoProjetos::setCntrServicoProjetos(IServicoProjetos *cntr){
    this->cntr = cntr;
}

#endif // CNTRLAPRESENTACAO_H_INCLUDED
