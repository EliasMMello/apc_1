#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero = 0;
    int x = 0;
    int y = 0;

    printf("Digite um n�mero inteiro: ");
    scanf("%i", &numero);
    printf("Voc� digitou: %i\n", numero);

    printf("Digite as coordenadas x e y: ");
    scanf("%i %i", &x, &y);
    printf("Voc� digitou: %i e %i\n", x, y);

    return 0;
}