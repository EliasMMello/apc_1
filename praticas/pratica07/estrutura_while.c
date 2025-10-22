#include <stdio.h>

int main() {

    int nota;

    printf("Digite a sua nota: ");
    scanf("%i", &nota);

    while (nota < 1 || nota > 10) {

        printf("Nota invalida. Tente Novamente: ");
        scanf("%i", &nota);

    }

    printf("Sua nota: %i", nota);

    return 0;
}