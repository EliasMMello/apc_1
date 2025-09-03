#include <stdio.h>

int main() {
    long int populacao_mundial = 7800000000L;
    const short int HORA_EM_SEGUNDOS = 3600;
    long double precisao_extrema = 3.14159265358979323846L;

    printf("Populacao Mundial: %li\n", populacao_mundial);
    printf("1 hora corresponde a %i segundos.\n", HORA_EM_SEGUNDOS);
    printf("Precisao Extrema: %.20Lf\n", precisao_extrema);
    return 0;
}