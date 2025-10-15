#include <stdio.h>

int main() {
    char operacao;
    float numero1, numero2;

    printf("Digite a operacao: ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    switch (operacao) {
        case '+':
            printf("Resultado: %.2f\n", numero1 + numero2); break;
        case '-':
            printf("Resultado: %.2f\n", numero1 - numero2); break;
        case '*':
            printf("Resultado: %.2f\n", numero1 * numero2); break;
        case '/':
            if (numero2 != 0) {
                printf("Resultado: %.2f\n", numero1 / numero2);
            } else {
                printf("Divisao por zero nao e permitida!\n");
            } break;
        default:
            printf("Operacao invalida.\n");
            break;
    }

    return 0;
}