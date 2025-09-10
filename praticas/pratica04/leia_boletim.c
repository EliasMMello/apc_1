#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    long long int matricula = 0;
    float a1 = 0;
    float a2 = 0;
    float media = 0;

    printf("Digite sua Matricula, A1, A2 e Media: ");
    scanf("%i %f %f %f", &matricula, &a1, &a2, &media);
    
    printf("%s %5s %5s %8s\n", "Matricula", "A1", "A2", "Media");
    printf("%lli %5.1f %5.1f %5.1f\n", matricula, a1, a2, media);

    return 0;
}