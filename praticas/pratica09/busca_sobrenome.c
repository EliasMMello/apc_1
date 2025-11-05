#include <stdio.h>
#include <string.h>

int main() {

    char nomes[10][101];
    char sobrenome[10];

    for (int i=0; i<10; i++) 
    {
        printf("Digite o %io nome: ", i+1);
        scanf("%s", nomes[i]);
    }

    return 0;
}