#include "stubs.hpp"

//----------------------------------------------------------------------------
// Implementação de método de classe stub.


const string StubIServicoAutenticacao::TRIGGER_FALHA = "aa@okcd7";

// Autor: 2110687910
bool StubIServicoAutenticacao::autenticar(Email &email, Senha &senha){

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
    const string TRIGGER_FALHA = "dd@okcd7";
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

bool StubIServicoControle::eliminar(Email email) {

    // Apresentar dados recebidos.
    const string TRIGGER_FALHA = "bb@okcd7";
    CLR_SCR;

    cout << "StubIServicoControle::eliminar" << endl ;

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
    const string TRIGGER_FALHA = "bb@okcd7";
    CLR_SCR;

    cout << "StubIServicoControle::editar" << endl ;

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
    const string TRIGGER_FALHA = "bb@okcd7";
    CLR_SCR;

    cout << "StubIServicoControle::visualizar" << endl ;

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
    const string TRIGGER_FALHA = "cc@okcd7";
    CLR_SCR;

    cout << "StubIServicoProjetos::criarQuadro" << endl ;
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
    const string TRIGGER_FALHA = "AA99";
    CLR_SCR;

    cout << "StubIServicoProjetos::visualizarQuadro" << endl ;

    // Diferentes comportamentos dependendo do valor do código.

    string valor = quadro->getCodigo().getValor();

    if (valor == TRIGGER_FALHA) {
        cout << "Visualizar quadro falhou." << endl;
    } else {
        cout << "Visualizar quadro foi um sucesso." << endl;
    }
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();
}

void StubIServicoProjetos::eliminarQuadro(const Conta conta, const Quadro quadro) {

    // Apresentar dados recebidos.
    const string TRIGGER_FALHA = "cc@okcd7";
    CLR_SCR;

    cout << "StubIServicoProjetos::eliminarQuadro" << endl ;
    string valor = conta.getEmail().getValor();

    cout << "Conta: " << valor << endl;
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
    const string TRIGGER_FALHA = "AA99";
    CLR_SCR;

    cout << "StubIServicoProjetos::criarCartao" << endl ;
    string valor = quadro.getCodigo().getValor();
    cout << "Conta: " << valor << endl;
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
    const string TRIGGER_FALHA = "AA99";
    CLR_SCR;

    cout << "StubIServicoProjetos::visualizarCartao" << endl ;
    string valor = cartao->getCodigo().getValor();
    cout << "Conta: " << valor << endl;
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

    const string TRIGGER_FALHA = "COLUNA INVALIDA";

    char texto11[]="Dado em formato incorreto. Digite algo.";
    char texto13[]="Digite a nova coluna: ";
    char campo1[80];

    CLR_SCR;

    cout << "StubIServicoProjetos::moverCartao" << endl ;

    // Diferentes comportamentos dependendo do valor da coluna.

    while(true){
        CLR_SCR;
        cout << texto13 << " ";
        cin.getline(campo1,sizeof(campo1));

        if (campo1 == TRIGGER_FALHA) {
            cout << "Mover cartão falhou." << endl;
            break;
        }
        Coluna colunaCartao;

        try{
           colunaCartao.setValor(string(campo1));
           break;
        }
        catch(invalid_argument &exp){
            CLR_SCR;
            cout << texto11 << endl;
            getch();
        }
    }
    string valor = coluna.getValor();
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();
}

void StubIServicoProjetos::eliminarCartao(const Cartao cartao) {

    // Apresentar dados recebidos.
    const string TRIGGER_FALHA = "AA99";
    CLR_SCR;

    cout << "StubIServicoProjetos::eliminarCartao" << endl ;
    string valor = cartao.getCodigo().getValor();
    cout << "Conta: " << valor << endl;
    // Diferentes comportamentos dependendo do valor do código.

    if (valor == TRIGGER_FALHA) {
        cout << "Eliminação do cartão falhou." << endl;
    } else {
        cout << "Eliminação do cartão foi um sucesso." << endl;
    }
    cout << endl << "Digite algo pra continuar." << endl ;
    getch();
}
