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
    char texto6[]="1 - Editar conta.";
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

    char texto1[]="Digite o e-mail  : ";
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

void CntrApresentacaoControle::executar(Email email){

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Cadastrar usuario.";
    char texto3[]="2 - Configurações de conta.";

    char texto4[]="3 - eliminar conta.";
    char texto5[]="4 - Editar conta.";
    char texto6[]="5 - Visualizar conta.";

    int campo;

    bool apresentar = true;

    while(apresentar){

        CLR_SCR;

        cout<<texto1<<endl;
        cout<<texto2<<endl;
        cout<<texto3<<endl;

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversao de ASCII.

        switch(campo){
            case 1: cntr->cadastrar(conta);
            case 2:
            cout<<texto1<<endl;
            cout<<texto4<<endl;
            cout<<texto5<<endl;
            cout<<texto6<<endl;

            campo = getch() - 48;

            switch(campo){
                case 3: cntr->eliminar(email);
                case 4: cntr->editar(conta);
                case 5: cntr->visualizar(&conta);
            }
        }
    }
}
