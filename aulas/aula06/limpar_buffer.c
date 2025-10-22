#include <stdio.h>

int main() {

    int numero = 0;

    printf("Entre com um numero: ");
    int leu_certo = scanf("%i", &numero);

    while (leu_certo == 0) {
        while (getchar() != '\n');
        printf("Nao eh numero! Tente novamente: ");
        leu_certo = scanf("%i", &numero);
    }

    return 0;
}