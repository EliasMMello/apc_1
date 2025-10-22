#include <stdio.h>

int main() {

    int n;
    int anterior = 0; 
    int proximo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        printf("%i\n", proximo);

        int auxiliar = proximo;

        proximo = proximo + anterior;
        anterior = auxiliar;
    }

    return 0;
}