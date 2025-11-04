#include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    int decimal = numero;

    for (int i = 128; i > 0; i = i / 2) {
        int bit = decimal / i;

        printf("%i", bit);

        decimal = decimal - bit * i;

    }

    return 0;
}