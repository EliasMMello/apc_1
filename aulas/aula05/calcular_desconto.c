#include <stdio.h>

int main() {

    float valor;
    float desconto;

    printf("Digite o valor da sua compra: ");
    scanf("%.2f", &valor);

    if (valor < 100.0f) {
        desconto = 1.0;
    } else {
        if (valor < 500.0f) {
        desconto = 5.0;
        } else {
            desconto = 10.0;
        }
    }

    printf("%s %f %s", "Seu desconto eh de:", desconto, "porcento");

    return 0;
}