#include <stdio.h>

int main() {

    int numero, maior, menor;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    maior = numero;
    menor = numero;

    while (numero != 0) {

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    printf("O maior numero digitado foi: %i\n", maior);
    printf("O menor numero digitado foi: %i\n", menor);

    return 0;
}