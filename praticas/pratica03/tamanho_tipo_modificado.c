#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("O tipo 'short int' ocupa %lu byte(s) na mem�ria.\n", sizeof(short int));

    printf("O tipo 'long int' ocupa %lu byte(s) na mem�ria.\n", sizeof(long int));

    printf("O tipo 'long double' ocupa %lu byte(s) na mem�ria.\n", sizeof(long double));
    return 0;
}