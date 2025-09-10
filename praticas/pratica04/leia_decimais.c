#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float preco = 0;
    double fracao = 0;

    printf("Digite um preço: ");
    scanf("%f", &preco);
    printf("Você digitou: %.2f\n", preco);

    printf("Digite uma fração: ");
    scanf("%lf", &fracao);
    printf("Você digitou: %.10f\n", fracao);

    return 0;
}