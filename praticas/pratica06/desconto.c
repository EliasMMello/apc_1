#include <stdio.h>

int main() {

    float valor_bruto;
    float valor_desconto;

    printf("Digite o Valor Bruto: ");
    scanf("%f", &valor_bruto);

    if (valor_bruto <= 100.00f) {
        valor_desconto = 0.01f * valor_bruto;
    } else if (valor_bruto <= 500.00f) {
        valor_desconto = 0.05f * valor_bruto;
    } else {
        valor_desconto = 0.1f * valor_bruto;
    }

    printf("O Valor Bruto e %.2f\n", valor_bruto);
    printf("O Valor Desconto e %.2f\n", valor_desconto);

    return 0;
}