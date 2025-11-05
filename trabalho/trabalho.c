#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    system("cls");

    int opcao;
    int id;
    int status = 0;
    int i = 1;

    char totalTarefa[15][30];
    char tarefa[30];

    while (opcao != 4){

        printf("---------------------\n");
        printf("------ M E N U ------\n");
        printf("---------------------\n");
        printf("1. Adicionar Tarefa\n");
        printf("2. Listar Tarefas\n");
        printf("3. Marcar como Concluido\n");
        printf("4. Sair\n");
        printf("---------------------\n");

        int leu_certo = scanf("%d", &opcao);

        if (leu_certo != 1) {

            system("cls");
            printf("Opcao invalida. Digite um numero de 1 a 4!");

            for (int temporizador = 5; temporizador>0; temporizador--) 
            {
                printf("\n%i...", temporizador);
                sleep(1);
            }

            system("cls");

            while (getchar() != '\n');

            continue;

        }

        switch (opcao) 
        {
            case 1:
                system("cls");

                printf("Adicione a %ia tarefa: \n", id);

            break;

            case 2: 
                system("cls");
                printf("Estas sao suas tarefas: \n"); 
            break;

            case 3: 
                system("cls");
                printf("Escolha uma tarefa para marcar como concluida: \n");
            break;

            case 4:
                system("cls");
                printf("---------------------\n");
                printf("-----S A I N D O-----\n");
                printf("---------------------\n");
                sleep(1);
                system("cls");
            break;

            default: 
                system("cls");
                printf("Opcao invalida. Digite um numero de 1 a 4!");
                sleep(3);
                system("cls");
                
        }
    }

    return 0;
}