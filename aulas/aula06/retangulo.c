#include <stdio.h>

int main() {

    int ladoA, ladoB;

    printf("Informe o valor do ladoA do retangulo: ");
    scanf("%i", &ladoA);

    printf("Informe o valor do ladoB do retangulo: ");
    scanf("%i", &ladoB);

    for (int i = 1; i <= ladoA; i++) 
    {
        for (int j = 1; j <= ladoB; j++) 
        {
            if (i == 1 || i == ladoA) 
            {
                printf("-");
            } 
            else if (j == 1 || j == ladoB) 
            {
                printf("|");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}