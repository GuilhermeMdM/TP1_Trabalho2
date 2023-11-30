#include "cntrApresentacao.hpp"

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