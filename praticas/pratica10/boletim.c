#include <stdio.h>

int main() {

    enum resultado_e {aprovado, reprovado, recuperacao};

    struct boletim_t {
        float a1;
        float a2;
        float media;
        int resultado;
    };

    struct boletim_t boletim;

    printf("Entre com a nota A1: ");
    scanf("%f", &boletim.a1);
    printf("Entre com a nota A2: ");
    scanf("%f", &boletim.a2);

    boletim.media = 0.4 * boletim.a1 + 0.6 * boletim.a2;

    if (boletim.media >= 5.0) {
        boletim.resultado = aprovado;
    } else if (boletim.media >= 1.0) {
        boletim.resultado = recuperacao;
    } else {
        boletim.resultado = reprovado;
    }

    printf("Seu Boletim\n");
    printf("A1.......: %2.1f\n", boletim.a1);
    printf("A2.......: %2.1f\n", boletim.a2);
    printf("Media....: %2.1f\n", boletim.media);
    printf("Resultado: %s\n", boletim.resultado == aprovado ? "Aprovado" : boletim.resultado == reprovado ? "Reprovado" : "Recuperacao");

    return 0;
}