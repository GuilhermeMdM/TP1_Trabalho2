#include "stubs.hpp"

//----------------------------------------------------------------------------
// Implementação de método de classe stub.


const string StubIServicoAutenticacao::TRIGGER_FALHA = "bb@okcd7";
const string StubIServicoAutenticacao::TRIGGER_ERRO_SISTEMA = "aa@okcd7";
const string StubIServicoControle::TRIGGER_FALHA = "bb@okcd7";
const string StubIServicoControle::TRIGGER_ERRO_SISTEMA = "aa@okcd7";
const string StubIServicoProjetos::TRIGGER_FALHA = "bb@okcd7";
const string StubIServicoProjetos::TRIGGER_ERRO_SISTEMA = "aa@okcd7";

bool StubIServicoAutenticacao::autenticar(const Email &email, const Senha &senha){

    // Apresentar dados recebidos.

    cout << endl << "StubIServicoAutenticacao::autenticar" << endl ;

    cout << "Email = " << email.getValor() << endl ;
    cout << "Senha = " << senha.getValor() << endl ;

    bool resultado = true;
    string valor = email.getValor();

    // Diferentes comportamentos dependendo do valor do email.

    if (valor == TRIGGER_FALHA) {
            resultado = false;
    } else if (valor == TRIGGER_ERRO_SISTEMA) {
            throw runtime_error("Erro de sistema.");
    }
    return resultado;
}

//----------------------------------------------------------------------------
// Implementações de métodos de classe stub.

bool StubIServicoControle::cadastrar(const Conta conta){

    // Apresentar dados recebidos.

    cout << endl << "StubIServicoControle::cadastrar" << endl ;

    bool resultado = true;
    string valor = conta.getEmail().getValor();

    // Diferentes comportamentos dependendo do valor do email.

    if (valor == TRIGGER_FALHA) {
            resultado = false;
    } else if (valor == TRIGGER_ERRO_SISTEMA) {
            throw runtime_error("Erro de sistema.");
    }

    return resultado;
}

bool StubIServicoControle::eliminar(const Email email) {

    // Apresentar dados recebidos.

    cout << endl << "StubIServicoControle::eliminar" << endl ;

    bool resultado = true;
    string valor = email.getValor();

    // Diferentes comportamentos dependendo do valor do email.

    if (valor == TRIGGER_FALHA) {
            resultado = false;
    } else if (valor == TRIGGER_ERRO_SISTEMA) {
            throw runtime_error("Erro de sistema.");
    }

    return resultado;
}

bool StubIServicoControle::editar(const Conta conta) {

    // Apresentar dados recebidos.

    cout << endl << "StubIServicoControle::editar" << endl ;

    bool resultado = true;
    string valor = conta.getEmail().getValor();

    // Diferentes comportamentos dependendo do valor do email.

    if (valor == TRIGGER_FALHA) {
            resultado = false;
    } else if (valor == TRIGGER_ERRO_SISTEMA) {
            throw runtime_error("Erro de sistema.");
    }

    return resultado;
}

bool StubIServicoControle::visualizar(const Conta* conta) {

    // Apresentar dados recebidos.

    cout << endl << "StubIServicoControle::visualizar" << endl ;

    bool resultado = true;
    string valor = conta->getEmail().getValor();

    // Diferentes comportamentos dependendo do valor do email.

    if (valor == TRIGGER_FALHA) {
            resultado = false;
    } else if (valor == TRIGGER_ERRO_SISTEMA) {
            throw runtime_error("Erro de sistema.");
    }

    return resultado;
}

void StubIServicoProjetos::criarQuadro(const Conta conta) {

    // Apresentar dados recebidos.

    cout << endl << "StubIServicoProjetos::criarQuadro" << endl ;
    string valor = conta.getEmail().getValor();
    // Diferentes comportamentos dependendo do valor do email.

    if (valor == TRIGGER_FALHA) {
            cout << "Criar quadro falhou." << endl;
    } else if (valor == TRIGGER_ERRO_SISTEMA) {
            cout << "Erro de sistema ao criar quadro." << endl;
            throw runtime_error("Erro de sistema.");
    }
}

void StubIServicoProjetos::visualizarQuadro(const Quadro* quadro) {

    // Apresentar dados recebidos.

    cout << endl << "StubIServicoProjetos::visualizarQuadro" << endl ;
    string valor = quadro->getCodigo().getValor();
    // Diferentes comportamentos dependendo do valor do código.

    if (valor == TRIGGER_FALHA) {
            cout << "Visualizar quadro falhou." << endl;
    } else if (valor == TRIGGER_ERRO_SISTEMA) {
            cout << "Erro de sistema ao visualizar quadro." << endl;
            throw runtime_error("Erro de sistema.");
    }
}

void StubIServicoProjetos::eliminarQuadro(const Quadro quadro) {

    // Apresentar dados recebidos.

    cout << endl << "StubIServicoProjetos::eliminarQuadro" << endl ;
    string valor = quadro.getCodigo().getValor();
    // Diferentes comportamentos dependendo do valor do código.

    if (valor == TRIGGER_FALHA) {
            cout << "Eliminar quadro falhou." << endl;
    } else if (valor == TRIGGER_ERRO_SISTEMA) {
            cout << "Erro de sistema ao eliminar quadro." << endl;
            throw runtime_error("Erro de sistema.");
    }
}

void StubIServicoProjetos::criarCartao(const Quadro quadro) {

    // Apresentar dados recebidos.

    cout << endl << "StubIServicoProjetos::criarCartao" << endl ;
    string valor = quadro.getCodigo().getValor();
    // Diferentes comportamentos dependendo do valor do código.

    if (valor == TRIGGER_FALHA) {
            cout << "Criar cartão falhou." << endl;
    } else if (valor == TRIGGER_ERRO_SISTEMA) {
            cout << "Erro de sistema ao criar cartão." << endl;
            throw runtime_error("Erro de sistema.");
    }
}

void StubIServicoProjetos::visualizarCartao(const Cartao* cartao) {

    // Apresentar dados recebidos.

    cout << endl << "StubIServicoProjetos::visualizarCartao" << endl ;
    string valor = cartao->getCodigo().getValor();
    // Diferentes comportamentos dependendo do valor do código.

    if (valor == TRIGGER_FALHA) {
            cout << "Visualizar cartão falhou." << endl;
    } else if (valor == TRIGGER_ERRO_SISTEMA) {
            cout << "Erro de sistema ao visualizar cartão." << endl;
            throw runtime_error("Erro de sistema.");
    }
}

void StubIServicoProjetos::moverCartao(Coluna coluna) {

    // Apresentar dados recebidos.

    cout << endl << "StubIServicoProjetos::moverCartao" << endl ;
    string valor = coluna.getValor();
    // Diferentes comportamentos dependendo do valor da coluna.

    if (valor == TRIGGER_FALHA) {
            cout << "Mover cartão falhou." << endl;
    } else if (valor == TRIGGER_ERRO_SISTEMA) {
            cout << "Erro de sistema ao mover cartão." << endl;
            throw runtime_error("Erro de sistema.");
    }
}

void StubIServicoProjetos::eliminarCartao(const Cartao cartao) {

    // Apresentar dados recebidos.

    cout << endl << "StubIServicoProjetos::eliminarCartao" << endl ;
    string valor = cartao.getCodigo().getValor();
    // Diferentes comportamentos dependendo do valor do código.

    if (valor == TRIGGER_FALHA) {
            cout << "Eliminação do cartão falhou." << endl;
    } else if (valor == TRIGGER_ERRO_SISTEMA) {
            cout << "Erro de sistema ao eliminar o cartão." << endl;
            throw runtime_error("Erro de sistema.");
    }
}
