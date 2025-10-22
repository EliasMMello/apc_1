#include <stdio.h>

int main () {

    int nota;

    printf("Digite a sua nota: ");
    scanf("%i", &nota);

    do {
        if (nota < 1 || nota > 10) {
            printf("Nota Invalida. Tente Novamente: ");
        }
    }
    while (nota < 1 || nota > 10);

    return 0;
}