#include "cntrApresentacao.hpp"

void CntrApresentacaoInicializacao::executar(){

    // Mensagens a serem apresentadas na tela inicial.
    char texto0[]="Tela inicial de sistema.";
    char texto1[]="Selecione um dos serviços : ";
    char texto2[]="1 - Autenticar.";
    char texto3[]="2 - Cadastrar.";
    char texto4[]="3 - Encerrar execução do sistema.";

    // Mensagens a serem apresentadas na tela de seleção de serviço.

    char texto5[]="Selecione um dos serviços : ";
    char texto6[]="1 - Gerenciamento de conta.";
    char texto7[]="2 - Gerenciar projetos.";
    char texto8[]="3 - Encerrar sessao.";

    char texto9[]="Falha na autenticação. Digite algo para continuar.";                         // Mensagem a ser apresentada.

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de laço.

    while(apresentar){

        // Apresenta tela inicial.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto0 << endl;
        cout << "\n";
        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.
        cout << texto4 << endl;

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversão de ASCII.

        switch(campo){
            case 1: if(cntrIApresentacaoAutenticacao->autenticar(&email)){                         // Solicita autenticação.
                        bool apresentar = true;                                                 // Controle de laço.

                        while(apresentar){

                            // Apresenta tela de seleção de serviço.

                            CLR_SCR;                                                            // Limpa janela.

                            cout << texto5 << endl;                                             // Imprime nome do campo.
                            cout << texto6 << endl;                                             // Imprime nome do campo.
                            cout << texto7 << endl;                                             // Imprime nome do campo.
                            cout << texto8 << endl;                                             // Imprime nome do campo.

                            campo = getch() - 48;                                               // Leitura do campo de entrada e conversão de ASCII.

                            switch(campo){
                                case 1: cntrIApresentacaoControle->executar(email);                 // Solicita serviço de pessoal.
                                        break;
                                case 2: cntrIApresentacaoProjetos->executar(email);     // Solicita serviço de produto financeiro.
                                        break;
                                case 3: apresentar = false;
                                        break;
                            }
                        }
                    }
                    else {
                        CLR_SCR;                                                                // Limpa janela.
                        cout << texto9 << endl;                                                 // Imprime mensagem.
                        getch();                                                                // Leitura de caracter digitado.
                    }
                    break;
            case 2: cntrIApresentacaoControle->cadastrar();
                    break;
            case 3: apresentar = false;
                    break;
        }
    }
    return;
}

bool CntrApresentacaoAutenticacao::autenticar(Email* email){

    char texto1[]="Digite o e-mail: ";
    char texto2[]="Digite a senha: ";
    char texto3[]="Dado em formato incorreto. Digite algo.";


    char campo1[80];
    char campo2[80];

    Senha senha;

    while(true){


        CLR_SCR;

        cout << texto1 << " ";
        cin >> campo1;
        cout << texto2 << " ";
        cin >> campo2;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        try{
            email->setValor(string(campo1));
            senha.setValor(string(campo2));
            break;
        }
        catch(invalid_argument &exp){
            CLR_SCR;
            cout << texto3 << endl;
            getch();
        }
    }
    return (cntr->autenticar(*email, senha));
}
void CntrApresentacaoControle::cadastrar(){

    // Mensagens a serem apresentadas na tela de cadastramento.

    char texto0[] ="Preencha os seguintes campos: ";
    char texto1[]="Nome: ";
    char texto2[]="E-mail: ";
    char texto3[]="Senha: ";
    char texto4[]="Dados em formato incorreto. Digite algo.";
    char texto5[]="Sucesso no cadastramento. Digite algo.";
    char texto6[]="Falha no cadastramento. Digite algo.";

    char campo1[80],  campo2[80],  campo3[80];      // Cria campos para entrada dos dados.

    // Instanciar os domínios.
    Texto nome;
    Email email;
    Senha senha;

    // Apresenta tela de cadastramento.

    CLR_SCR;                                                                                // Limpa janela.

    cout << texto0 << endl;
    cout << texto1 << " ";
    cin.getline(campo1,sizeof(campo1));


    cout << texto2 << " ";
    cin.getline(campo2,sizeof(campo2));                                                     // Imprime nome do campo.
                                                                                            // Lê valor do campo.
    cout << texto3 << " ";
    cin.getline(campo3,sizeof(campo3));                                                     // Imprime nome do campo.

    try{
        nome.setValor(string(campo1));
        email.setValor(string(campo2));
        senha.setValor(string(campo3));
    }
    catch(invalid_argument &exp){
        cout << texto4 << endl;                                                              // Informa formato incorreto.
        getch();                                                                             // Leitura de caracter digitado.
        return;
    }

    // Instancia e inicializa entidades.

    conta.setNome(nome);
    conta.setEmail(email);
    conta.setSenha(senha);

    // Cadastra usuário e conta.

    if(cntr->cadastrar(conta)){
        CLR_SCR;
        cout << texto5 << endl;                                                              // Informa sucesso.
        getch();
        return;
    }

    CLR_SCR;
    cout << texto6 << endl;                                                                  // Informa falha.
    getch();

    return;
}

void CntrApresentacaoControle::executar(Email email){

    char texto1[]="Selecione um dos servicos : ";

    char texto4[]="1 - Eliminar conta.";
    char texto5[]="2 - Editar conta.";
    char texto6[]="3 - Visualizar conta.";
    char texto7[]="4 - Voltar.";

    char texto9[]="Sucesso no método requerido. Digite algo.";
    char texto10[]="Falha no método requerido. Digite algo.";

    int campo;

    bool apresentar = true;

    conta.setEmail(email);

    while(apresentar){

                CLR_SCR;

                cout<<texto1<<endl;
                cout<<texto4<<endl;
                cout<<texto5<<endl;
                cout<<texto6<<endl;
                cout<<texto7<<endl;

                campo = getch() - 48;

                switch(campo){

                    case 1:
                        if (cntr->eliminar(email)) {
                            CLR_SCR;
                            cout << texto9 << endl;
                            getch();
                        } else {
                            CLR_SCR;
                            cout << texto10 << endl;
                            getch();
                        }
                        break;

                    case 2:
                        if(cntr->editar(conta)) {
                            CLR_SCR;
                            cout << texto9 << endl;
                            getch();
                        } else {
                            CLR_SCR;
                            cout << texto10 << endl;
                            getch();
                        }
                        break;

                    case 3:
                        if(cntr->visualizar(&conta)) {
                            CLR_SCR;
                            cout << texto9 << endl;
                            getch();
                        } else {
                            CLR_SCR;
                            cout << texto10 << endl;
                            getch();
                        }
                        break;

                    case 4:
                        apresentar = false;
                        break;
                }
    }
}

void CntrApresentacaoProjetos::executar(Email email) {

    // Mensagens a serem apresentadas tela completa de produtos financeiros.

    char texto1[] ="Selecione um dos servicos : ";
    char texto2[] ="1 - Criar Quadro.";
    char texto3[] ="2 - Visualizar Quadro.";
    char texto4[] ="3 - Eliminar Quadro.";
    char texto5[] ="4 - Criar Cartão";
    char texto6[] ="5 - Visualizar Cartão.";
    char texto7[] ="6 - Mover Cartão.";
    char texto8[] ="7 - Eliminar cartão.";
    char texto9[] ="8 - Retornar.";
    char texto10[]="Digite o código do quadro: ";
    char texto11[]="Dado em formato incorreto. Digite algo.";
    char texto12[]="Digite o código do cartão: ";
    char texto13[]="Digite a nova coluna: ";

    char campo1[80];

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de laço.

    conta.setEmail(email);

    while(apresentar){

        // Apresenta tela completa de produtos financeiros.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.
        cout << texto4 << endl;                                                                 // Imprime nome do campo.
        cout << texto5 << endl;                                                                 // Imprime nome do campo.
        cout << texto6 << endl;                                                                 // Imprime nome do campo.
        cout << texto7 << endl;                                                                 // Imprime nome do campo.
        cout << texto8 << endl;                                                                 // Imprime nome do campo.
        cout << texto9 << endl;

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversão de ASCII.

        switch(campo){
            case 1:
                cntr->criarQuadro(conta);
                break;
            case 2:
                while(true){
                    CLR_SCR;
                    cout << texto10 << " ";
                    cin >> campo1;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    Codigo codigoQuadro;

                    try{
                        codigoQuadro.setValor(string(campo1));
                        quadro.setCodigo(codigoQuadro);
                        break;
                    }
                    catch(invalid_argument &exp){
                        CLR_SCR;
                        cout << texto11 << endl;
                        getch();
                    }
                }
                cntr->visualizarQuadro(&quadro);
                break;
            case 3:
                cntr->eliminarQuadro(conta, quadro);
                break;
            case 4:
                while(true){
                    CLR_SCR;
                    cout << texto10 << " ";
                    cin >> campo1;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    Codigo codigoQuadro;

                    try{
                        codigoQuadro.setValor(string(campo1));
                        quadro.setCodigo(codigoQuadro);
                        break;
                    }
                    catch(invalid_argument &exp){
                        CLR_SCR;
                        cout << texto11 << endl;
                        getch();
                    }
                }
                cntr->criarCartao(quadro);
                break;
            case 5:
                while(true){
                    CLR_SCR;
                    cout << texto12 << " ";
                    cin >> campo1;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    Codigo codigoCartao;

                    try{
                        codigoCartao.setValor(string(campo1));
                        cartao.setCodigo(codigoCartao);
                        break;
                    }
                    catch(invalid_argument &exp){
                        CLR_SCR;
                        cout << texto11 << endl;
                        getch();
                    }
                }
                cntr->visualizarCartao(&cartao);
                break;
            case 6:

                cntr->moverCartao(coluna);
                break;
            case 7:
                while(true){
                    CLR_SCR;
                    cout << texto12 << " ";
                    cin >> campo1;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    Codigo codigoCartao;

                    try{
                        codigoCartao.setValor(string(campo1));
                        cartao.setCodigo(codigoCartao);
                        break;
                    }
                    catch(invalid_argument &exp){
                        CLR_SCR;
                        cout << texto11 << endl;
                        getch();
                    }
                }
                cntr->eliminarCartao(cartao);
                break;
            case 8:
                apresentar = false;
                break;
        }
    }
}
