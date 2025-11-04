#include <stdio.h>

int main() {

    float notas[10];
    float soma = 0.0f;
    float media;
    int qtde_acima_media = 0;

    for(int i=0; i<10; i++) 
    {
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 10;

    for(int i=0; i<10; i++) 
    {
        if(notas[i] > media) {
            qtde_acima_media = qtde_acima_media + 1;
        }
    }

    printf("%f\n", media);
    printf("%d\n", qtde_acima_media);

    return 0;
}