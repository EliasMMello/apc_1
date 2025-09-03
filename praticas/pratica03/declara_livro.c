#include <stdio.h>

int main() {
    int isbn = 0;
    int num_pag = 0;
    float preco = 0;
    int ano = 0;

    printf("ISBN: %013i\n", isbn);
    printf("Num. Paginas: %03i\n", num_pag);
    printf("Preco: R$ %07.2f\n", preco);
    printf("Publicado em: %04i\n", ano);
    return 0;
}