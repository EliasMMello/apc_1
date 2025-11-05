#include <stdio.h>
#include <string.h>

int main() {

    char nomes[10][101];

    int i;

    for (int i=0; i<10; i++) 
    {
        printf("Digite o %io nome: ", i+1);
        scanf("%s", nomes[i]);
    }

    printf("Escolha um nome de 1 a 10: ");
    scanf("%i", &i);

    i--;

    printf("Nome: %s", nomes[i]);

    return 0;
}