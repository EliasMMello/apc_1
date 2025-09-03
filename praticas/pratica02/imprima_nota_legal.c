#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    printf("==============================\n");
    printf("%25s\n", "N O T A    L E G A L");
    printf("==============================\n");

    printf("%-15s %s %s\n", "Produto", "Qtd", "Valor Unit");
    printf("%-15s %003i %10.2f\n", "Camiseta", 2, 39.99);
    printf("%-15s %003i %10.2f\n", "Calca", 1, 89.90);
    printf("%-15s %003i %10.2f\n", "Meia Social", 3, 19.99);

    printf("==============================\n");
    printf("%-23s %.2f\n", "Total:", 229.85);
    return 0;
}