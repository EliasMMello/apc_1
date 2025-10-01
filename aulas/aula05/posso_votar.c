#include <stdio.h>

int main() {
   
    int idade;

    printf("Qual a sua idade? \n");
    scanf("%i", &idade);

    if (idade < 16) {
        printf("Nao pode votar!");
    } else {
        if (idade < 18 || idade > 70) {
            printf("Pode votar!");
        } else {
            printf("Deve votar!");
        }
    }

    return 0;
}