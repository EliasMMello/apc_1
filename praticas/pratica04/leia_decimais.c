#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float preco = 0;
    double fracao = 0;

    printf("Digite um pre�o: ");
    scanf("%f", &preco);
    printf("Voc� digitou: %.2f\n", preco);

    printf("Digite uma fra��o: ");
    scanf("%lf", &fracao);
    printf("Voc� digitou: %.10f\n", fracao);

    return 0;
}