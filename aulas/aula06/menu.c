#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opcao;

    while (opcao != 3)
    {

        printf("--------------------\n");
        printf("   M E U  J O G O   \n");
        printf("--------------------\n");
        printf("   1. Novo Jogo\n");
        printf("   2. Ver Ranking\n");
        printf("   3. Sair\n");
        printf("--------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%i", &opcao);
        while (getchar() != '\n');

        switch (opcao)
        {
        case 1:

            system("clear");

            char nome[30];

            printf("Digite o Seu Nome: ");
            fgets(nome, sizeof(nome), stdin);

            printf("Ola %s\n Pressione ENTER para comecar o jogo.\n", nome);
            getchar();

            break;

        case 2:

            printf("Voce acessou o ranking\n");

            break;

        case 3:

            printf("-------SAINDO-------");

            break;

        default:
            system("clear");
            printf("Opcao Invalida");
        }
    }

    return 0;
}