#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char tecla = 'A';
    char nome[31] = "";

    printf("Digite uma tecla: ");
    scanf("%c", &tecla);
    printf("Voc� digitou: %c\n", tecla);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Voc� digitou: %s\n", nome);

    return 0;
}