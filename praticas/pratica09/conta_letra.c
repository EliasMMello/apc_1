#include <stdio.h>
#include <string.h>

int main() {

    char frase[31];
    char letra;

    int quantidade = 0;

    printf("Digite uma frase: ");
    scanf("%s", &frase);

    while (getchar() != '\n');

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    for (int i=0; i<strlen(frase); i++)
    {
        if (frase[i] == letra) {
            quantidade++;
        }
    }

    if (quantidade > 0) {
        printf("%i", quantidade);
    } else {
        printf("A frase nao contem letra!");
    }

    return 0;
}