#include <stdio.h>

int main() {

    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura >= 40.0f) {
        printf("Muito Quente.");
    } else if (temperatura < 40.0f && temperatura >= 30.0f) {
        printf("Quente.");
    } else if (temperatura < 30.0f && temperatura >= 20.0f) {
        printf("Agradavel.");
    } else {
        printf("Frio.");
    }

    return 0;
}