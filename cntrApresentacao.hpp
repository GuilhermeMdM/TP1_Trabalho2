#ifndef CNTRAPRESENTACAO_H_INCLUDED
#define CNTRAPRESENTACAO_H_INCLUDED

#include <conio.h>
#include <iostream>
#include <string.h>

#include "biblioteca_de_classes/dominios.hpp"
#include "biblioteca_de_classes/entidades.hpp"
#include "biblioteca_de_classes/auxiliar.hpp"
#include "interfaces.hpp"

#define CLR_SCR system("cls");

using namespace std;

//Autor: 221006431
class CntrApresentacaoAutenticacao:public IApresentacaoAutenticacao{
    private:
    IServicoAutenticacao* cntr;
    public:
    bool autenticar(Email*);
    void setCntrSAutenticacao(IServicoAutenticacao*);
};

inline void CntrApresentacaoAutenticacao::setCntrSAutenticacao(IServicoAutenticacao *cntr){
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
        void setCntrSControle(IServicoControle*);
};

inline void CntrApresentacaoControle::setCntrSControle(IServicoControle* cntr){
    this->cntr = cntr;
};




#endif // CNTRLAPRESENTACAO_H_INCLUDED