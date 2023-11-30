#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "interfaces.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;

//----------------------------------------------------------------------------
// Declaração de stub que implementa interface da camada de serviço.

class StubIServicoAutenticacao:public IServicoAutenticacao{
public:

    // Definições de valores a serem usados como gatilhos para notificações de erros.

    const static int TRIGGER_FALHA        = 67890;
    const static int TRIGGER_ERRO_SISTEMA = 78901;

    // Declaração de método relacionado na interface.

    bool autenticar(const Email&, const Senha&);
};

//----------------------------------------------------------------------------
// Declaração de stub que implementa interface da camada de serviço.

class StubIServicoControle:public IServicoControle{
public:

    // Definições de valores a serem usados como gatilhos para notificações de erros.

    const static int TRIGGER_FALHA        = 67890;
    const static int TRIGGER_ERRO_SISTEMA = 78901;

    // Declarações de métodos relacionados na interface.

    bool cadastrar(const Conta);
    bool eliminar(const Email);
    bool editar(const Conta);
    bool visualizar(const Conta*);
};

//----------------------------------------------------------------------------
// Declaração de stub que implementa interface da camada de serviço.

class StubIServicoProjetos:public IServicoProjetos{
public:

    // Definições de valores a serem usados como gatilhos para notificações de erros.

    const static int TRIGGER_FALHA        = 67890;
    const static int TRIGGER_ERRO_SISTEMA = 78901;

    // Declaração de método relacionado na interface.

    void criarQuadro(const Conta);
    void visualizarQuadro(const Quadro*);
    void eliminarQuadro(const Quadro);

    void criarCartao(const Quadro);
    void visualizarCartao(const Cartao*);
    void moverCartao(Coluna);
    void eliminarCartao(const Cartao);
};

#endif // STUBS_H_INCLUDED
