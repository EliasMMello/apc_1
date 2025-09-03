#include <stdio.h>

int main() {
    int matricula = 0;
    int idade = 99;
    float altura = 9.90;
    float peso = 999.0;
    char sexo = 'F';

    printf("Matricula: %08i\n", matricula);
    printf("Idade: %02i anos\n", idade);
    printf("Altura: %04.2f m\n", altura);
    printf("Peso: %04.1f kg\n", peso);
    printf("Sexo: %c\n", sexo);
    return 0;
}