#ifndef AUX_H_INCLUDED
#define AUX_H_INCLUDED

class ChecaCaractere{
    public:
        static int caractere_ascii;
        static char sinais_de_pontuacao[5];
        static bool e_maiuscula_sem_acento(char);
        static bool e_minuscula_sem_acento(char);
        static bool e_pontuacao(char);
        static bool e_digito (char);
        static bool e_embranco (char);
        static bool caractere_especial_email (char);
};


#endif // AUX_H_INCLUDED
