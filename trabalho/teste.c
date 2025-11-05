#include <stdio.h>
#include <string.h>

int main() {

    char nomes[5][101];

    int i;

    for (int i=0; i<5; i++) 
    {
        printf("Digite o %io nome: ", i+1);
        fgets(nomes[i], 101, stdin);
    }

    printf("Escolha um nome de 1 a 5: ");
    scanf("%i", &i);

    i--;

    printf("Nome: %s", nomes[i]);

    return 0;
}