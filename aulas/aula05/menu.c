#include <stdio.h>

int main() {

    int opcao;

    printf("--------------------\n");
    printf("   MENU PRINCIPAL   \n");
    printf("--------------------\n");
    printf("1. Consultar Saldo\n");
    printf("2. Fazer Recarga\n");
    printf("3. Ouvir Recados\n");
    printf("4. Ultima Chamada\n");
    printf("5. Encerrar Chat\n");
    printf("--------------------\n");

    printf("Escolha uma opcao: ");
    scanf("%i", &opcao);
    
    switch (opcao) {
        case 1: printf("Seu saldo e de R$ 10,00\n"); break;
        case 2: printf("Escolha um valor de recarga\n"); break;
        case 3: printf("Voce nao tem recados\n"); break;
        case 4: printf("A ultima chamada foi 99999-9999\n"); break;
        case 5: printf("Obrigado pelo seu contato\n"); break;
        default: printf("Opcao Invalida. Tente Novamente\n");
    }

    return 0;
}