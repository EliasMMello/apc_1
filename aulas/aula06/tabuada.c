#include <stdio.h>

int main () {

    int numero;

    printf("Entre com um numero de 1 a 10: ");
    scanf("%i", &numero);

    printf("\nA tabuada de %i\n", numero);
    
    for (int i = 1; i <= 10; i++) {
        printf("%i x %i = %i\n", i, numero, i*numero);
    }

    return 0;
}