#include <stdio.h>

int main() {

    int ano;

    printf("Digite o ano.\n");
    int ano_bissexto = scanf("%i", &ano);

    if (ano_bissexto = (ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano %d eh bissexto!\n", ano);
    } else {
        printf("O ano %d naum eh bissexto!\n", ano);
    }

    return 0;
}