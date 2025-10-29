#include <stdio.h>

int main () {

    int numeros [10][10];
    int numero;
    int achou = -1;

    for (int i = 0; i < 10; i++) 
    {
        scanf("%i", &numeros);
    }

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for (int i = 0; i < 9; i++) 
    {
        if (numeros[i] == numero) {
            achou = i;
            printf("O numero nao foi encontrado!");
        } else {
            printf("O numero foi encontrado na posição %i", i);
        }
    }

    return 0;
}