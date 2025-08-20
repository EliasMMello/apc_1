#include <stdio.h>
#include <locale.h> // biblioteca de idiomas

int main() {
    setlocale(LC_ALL, ""); // usa o idioma portugues
    printf("-------------\n\n");
    printf("Olá, bom dia!\n\n");
    printf("-------------\n\n");

    printf("--------------------\n");
    printf(" N O T A  L E G A L\n");
    printf("--------------------\n");
    printf("Caderno     1  10.00\n");
    printf("Lápis       2   5.00\n");
    printf("Borracha    1   7.50\n");
    printf("--------------------\n");
    printf("Total.......:  22.50\n");

    // especificador de formato
    // %c - imprime um caractere
    // %s - imprime um texto (string)
    // %i - imprime um inteiro
    // %f - imprime um flutuante (fracionario)
    printf("\nCaderno   001  10.00\n");
    printf("%-9s %03i %6.2f\n", "Caderno", 1, 10.0);
    printf("%-9s %03i %6.2f\n", "Lápis", 2, 5.0);


    return 0;
}