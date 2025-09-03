#include <stdio.h>

int main() {
    int idade = 25;
    float altura = 1.75f;
    char tecla = 'A';
    double numero_e = 2.7182818284;

    printf("Idade: %i\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Tecla: %c\n", tecla);
    printf("Numero de Euler: %.10f\n", numero_e);
    return 0;
}