#include "stubs.hpp"

//----------------------------------------------------------------------------
// Implementação de método de classe stub.


const string StubIServicoAutenticacao::TRIGGER_FALHA = "bb@okcd7";
const string StubIServicoControle::TRIGGER_FALHA = "aa@okcd7";
const string StubIServicoProjetos::TRIGGER_FALHA = "cc@okcd7";

bool StubIServicoAutenticacao::autenticar(const Email &email, const Senha &senha){

    // Apresentar dados recebidos.

    CLR_SCR;

    cout << "StubIServicoAutenticacao::autenticar" << endl ;

    cout << endl << "Email = " << email.getValor() << endl ;
    cout << "Senha = " << senha.getValor() << endl ;

    cout << endl << "Digite algo."<< endl ;
    getch();

    bool resultado = true;
    string valor = email.getValor();

    // Diferentes comportamentos dependendo do valor do email.

    if (valor == TRIGGER_FALHA) {
        resultado = false;
    }
    return resultado;
}

//----------------------------------------------------------------------------
// Implementações de métodos de classe stub.

bool StubIServicoControle::cadastrar(const Conta conta){

    // Apresentar dados recebidos.

    CLR_SCR;

    cout << "StubIServicoControle::cadastrar" << endl ;

    cout << endl << "Nome = " << conta.getNome().getValor() << endl ;
    cout << "Email = " << conta.getEmail().getValor() << endl ;
    cout << "Senha = " << conta.getSenha().getValor() << endl ;
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();

    bool resultado = true;
    string valor = conta.getEmail().getValor();

    // Diferentes comportamentos dependendo do valor do email.

    if (valor == TRIGGER_FALHA) {
            resultado = false;
    }
    return resultado;
}

bool StubIServicoControle::eliminar(const Email email) {

    // Apresentar dados recebidos.

    CLR_SCR;

    cout << endl << "StubIServicoControle::eliminar" << endl ;

    cout << endl << "Email = " << email.getValor() << endl ;
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();

    bool resultado = true;
    string valor = email.getValor();

    // Diferentes comportamentos dependendo do valor do email.

    if (valor == TRIGGER_FALHA) {
            resultado = false;
    }

    return resultado;
}

bool StubIServicoControle::editar(const Conta conta) {

    // Apresentar dados recebidos.

    CLR_SCR;

    cout << endl << "StubIServicoControle::editar" << endl ;

    cout << endl << "Nome = " << conta.getNome().getValor() << endl ;
    cout << "Email = " << conta.getEmail().getValor() << endl ;
    cout << "Senha = " << conta.getSenha().getValor() << endl ;
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();

    bool resultado = true;
    string valor = conta.getEmail().getValor();

    // Diferentes comportamentos dependendo do valor do email.

    if (valor == TRIGGER_FALHA) {
            resultado = false;
    }

    return resultado;
}

bool StubIServicoControle::visualizar(const Conta* conta) {

    // Apresentar dados recebidos.

    CLR_SCR;

    cout << endl << "StubIServicoControle::visualizar" << endl ;

    cout << endl << "Nome = " << conta->getNome().getValor() << endl ;
    cout << "Email = " << conta->getEmail().getValor() << endl ;
    cout << "Senha = " << conta->getSenha().getValor() << endl ;
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();

    bool resultado = true;
    string valor = conta->getEmail().getValor();

    // Diferentes comportamentos dependendo do valor do email.

    if (valor == TRIGGER_FALHA) {
            resultado = false;
    }
    return resultado;
}

void StubIServicoProjetos::criarQuadro(const Conta conta) {

    // Apresentar dados recebidos.

    CLR_SCR;

    cout << endl << "StubIServicoProjetos::criarQuadro" << endl ;
    string valor = conta.getEmail().getValor();
    // Diferentes comportamentos dependendo do valor do email.

    if (valor == TRIGGER_FALHA) {
        cout << "Criar quadro falhou." << endl;
    } else {
        cout << "Criar quadro foi um sucesso." << endl;
    }
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();
}

void StubIServicoProjetos::visualizarQuadro(const Quadro* quadro) {

    // Apresentar dados recebidos.

    CLR_SCR;

    cout << endl << "StubIServicoProjetos::visualizarQuadro" << endl ;
    string valor = quadro->getCodigo().getValor();
    // Diferentes comportamentos dependendo do valor do código.

    if (valor == TRIGGER_FALHA) {
        cout << "Visualizar quadro falhou." << endl;
    } else {
        cout << "Visualizar quadro foi um sucesso." << endl;
    }
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();
}

void StubIServicoProjetos::eliminarQuadro(const Quadro quadro) {

    // Apresentar dados recebidos.

    CLR_SCR;

    cout << endl << "StubIServicoProjetos::eliminarQuadro" << endl ;
    string valor = quadro.getCodigo().getValor();
    // Diferentes comportamentos dependendo do valor do código.

    if (valor == TRIGGER_FALHA) {
        cout << "Eliminar quadro falhou." << endl;
    } else {
        cout << "Eliminar quadro foi um sucesso." << endl;
    }
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();
}

void StubIServicoProjetos::criarCartao(const Quadro quadro) {

    // Apresentar dados recebidos.

    CLR_SCR;

    cout << endl << "StubIServicoProjetos::criarCartao" << endl ;
    string valor = quadro.getCodigo().getValor();
    // Diferentes comportamentos dependendo do valor do código.

    if (valor == TRIGGER_FALHA) {
        cout << "Criar cartão falhou." << endl;
    } else {
        cout << "Criar cartão foi um sucesso." << endl;
    }
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();
}

void StubIServicoProjetos::visualizarCartao(const Cartao* cartao) {

    // Apresentar dados recebidos.

    CLR_SCR;

    cout << endl << "StubIServicoProjetos::visualizarCartao" << endl ;
    string valor = cartao->getCodigo().getValor();
    // Diferentes comportamentos dependendo do valor do código.

    if (valor == TRIGGER_FALHA) {
        cout << "Visualizar cartão falhou." << endl;
    } else {
        cout << "Visualizar cartão foi um sucesso." << endl;
    }
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();
}

void StubIServicoProjetos::moverCartao(Coluna coluna) {

    // Apresentar dados recebidos.

    CLR_SCR;

    cout << endl << "StubIServicoProjetos::moverCartao" << endl ;
    string valor = coluna.getValor();
    // Diferentes comportamentos dependendo do valor da coluna.

    if (valor == TRIGGER_FALHA) {
        cout << "Mover cartão falhou." << endl;
    } else {
        cout << "Mover cartão foi um sucesso." << endl;
    }
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();
}

void StubIServicoProjetos::eliminarCartao(const Cartao cartao) {

    // Apresentar dados recebidos.

    CLR_SCR;

    cout << endl << "StubIServicoProjetos::eliminarCartao" << endl ;
    string valor = cartao.getCodigo().getValor();
    // Diferentes comportamentos dependendo do valor do código.

    if (valor == TRIGGER_FALHA) {
        cout << "Eliminação do cartão falhou." << endl;
    } else {
        cout << "Eliminação do cartão foi um sucesso." << endl;
    }
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();
}
