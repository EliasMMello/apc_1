#include <stdio.h>

int main () {

    int numero, fatorial;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for (int i = numero; i > 0; i--) {
        fatorial = fatorial * i;
    }

    printf("%i %i", numero, fatorial);

    return 0;
}