#include <stdio.h>
#include <string.h>

int main() {

    struct endereco_t
    {
        char tipo_logradouro;
        char nome_logradouro[61];
        int numero;
        char bairro[31];
        char localidade[41];
        char uf[3];
    };

    struct endereco_t meu_endereco;

    meu_endereco.tipo_logradouro = 'Q';
    strcpy(meu_endereco.nome_logradouro, "SGAS");
    meu_endereco.numero = 613;
    strcpy(meu_endereco.bairro, "Asa Sul");
    strcpy(meu_endereco.localidade, "Brasilia");
    strcpy(meu_endereco.uf, "DF");

    printf("Meu endereco: \n");
    printf("%c - %s %i\n", meu_endereco.tipo_logradouro, meu_endereco.nome_logradouro, meu_endereco.numero);
    printf("%s\n", meu_endereco.bairro);
    printf("%s - %s\n", meu_endereco.localidade, meu_endereco.uf);

    struct contato_t {
        char nome[61];
        long int telefone;
        struct endereco_t endereco;
    };

    struct contato_t meu_contato;
    
    strcpy(meu_contato.nome, "Jose");
    meu_contato.telefone = 61888888888L;
    meu_contato.endereco = meu_endereco;

    struct contato_t contatos[10];

    return 0;
}