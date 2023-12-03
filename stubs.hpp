#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "interfaces.hpp"
#include <stdexcept>
#include <iostream>
#include <string.h>
#include <conio.h>
#include <limits>

#define CLR_SCR system("cls");

using namespace std;

//----------------------------------------------------------------------------
// Declaração de stub que implementa interface da camada de serviço.

class StubIServicoAutenticacao:public IServicoAutenticacao{
public:

    // Definições de valores a serem usados como gatilhos para notificações de erros.

    const static string TRIGGER_FALHA;

    // Declaração de método relacionado na interface.

    bool autenticar(Email&, Senha&);
};

//----------------------------------------------------------------------------
// Declaração de stub que implementa interface da camada de serviço.

class StubIServicoControle:public IServicoControle{
public:

    // Definições de valores a serem usados como gatilhos para notificações de erros.

    const static string TRIGGER_FALHA;

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

    const string TRIGGER_FALHA;

    // Declaração de método relacionado na interface.

    void criarQuadro(const Conta);
    void visualizarQuadro(const Quadro*);
    void eliminarQuadro(const Conta, const Quadro);

    void criarCartao(const Quadro);
    void visualizarCartao(const Cartao*);
    void moverCartao(Coluna);
    void eliminarCartao(const Cartao);
};

#endif // STUBS_H_INCLUDED
