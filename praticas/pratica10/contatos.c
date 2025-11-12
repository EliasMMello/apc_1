#include <stdio.h>

int main() {

    const int LIMITE = 10;

    struct contato_t {
        char nome[61];
        long int telefone;
    };

    struct contato_t contatos[LIMITE];

    for(int i  = 0; i < LIMITE; i++) {
        printf("Entre com o nome do %io contato: ", i+1);
        scanf("%[^\n]s", contatos[i].nome);
        while(getchar() != '\n');
        printf("Entre com o telefone do %io contato: ", i+1);
        scanf("%li", &contatos[i].telefone);
        while(getchar() != '\n');
    }

    for(int i  = 0; i < LIMITE; i++) {
        printf("%s - (%li)\n", contatos[i].nome, contatos[i].telefone);
    }

    return 0;
}