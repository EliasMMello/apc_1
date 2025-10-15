#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;

    printf("Digite as variaveis a, b e c: ");
    scanf("%i %i %i", &a, &b, &c);

    float delta = b*b - 4*a*c;
    float x1 = (-b + sqrt(delta))/2*a;
    float x2 = (-b - sqrt(delta))/2*a;

    if (delta >= 0) {
        printf("x1 = %.2f\nx2 = %.2f", x1, x2);
    } else {
        printf("Equacao nao tem raizes!");
    }
    
    return 0;
}