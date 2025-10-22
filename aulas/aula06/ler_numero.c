#include <stdio.h>

int main() {

    int numero = 0;

    printf("Enre com um numero inteiro de 1 a 10: ");
    scanf("%i", &numero);

    while (numero > 10 || numero < 1) {
        printf("O numero deve estar entre 1 e 10! Digite novamente: ");
        scanf("%i", &numero);
    }

    printf("Voce digitou o numero %i!", numero);

    return 0;
}