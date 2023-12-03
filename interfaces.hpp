#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "biblioteca_de_classes/dominios.hpp"
#include "biblioteca_de_classes/entidades.hpp"
#include <stdexcept>

using namespace std;

class IServicoAutenticacao;

class IApresentacaoAutenticacao{
    public:
        virtual bool autenticar(Email*) = 0;
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};

class IServicoAutenticacao{
    public:
        virtual bool autenticar(const Email&, const Senha&) = 0;
        virtual ~IServicoAutenticacao(){}
};

class IServicoControle;

class IApresentacaoControle{
    public:
        virtual void cadastrar() = 0;
        virtual void executar(Email) = 0;
        virtual void setCntrServicoControle(IServicoControle*) = 0;
        virtual ~IApresentacaoControle(){}
};

class IServicoControle{
    public:
        virtual bool cadastrar(const Conta) = 0;
        virtual bool eliminar(const Email) = 0;
        virtual bool editar(const Conta) = 0;
        virtual bool visualizar(const Conta*) = 0;
        virtual ~IServicoControle(){}
};

class IServicoProjetos;

class IApresentacaoProjetos{
    public:
        virtual void executar(Email) = 0;
        virtual void setCntrServicoProjetos(IServicoProjetos*) = 0;
        virtual ~IApresentacaoProjetos(){}
};

class IServicoProjetos{
    public:
        virtual void criarQuadro(const Conta) = 0;
        virtual void visualizarQuadro(const Quadro*) = 0;
        virtual void eliminarQuadro(const Conta, const Quadro) = 0;

        virtual void criarCartao(const Quadro) = 0;
        virtual void visualizarCartao(const Cartao*) = 0;
        virtual void moverCartao(Coluna) = 0;
        virtual void eliminarCartao(const Cartao) = 0;

        virtual ~IServicoProjetos(){}
};

#endif // INTERFACES_H_INCLUDED
