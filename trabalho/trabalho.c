#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {

    system("cls");

    int opcao;
    int tarefa = 0;

    char tarefas[50][101];

    while (opcao != 4) {

        printf("|---------------------------|\n");
        printf("|--------- M E N U ---------|\n");
        printf("|---------------------------|\n");
        printf("|   1. Adicionar Tarefa     |\n");
        printf("|   2. Listar Tarefas       |\n");
        printf("|   3. Pesquisar Tarefas    |\n");
        printf("|   4. Sair                 |\n");
        printf("|---------------------------|\n");

        printf("\nSelecione um numero de 1 a 4: ");
        int leu_certo = scanf("%d", &opcao);

        if (leu_certo != 1) {

            system("cls");
            printf("Opcao invalida. Digite um numero de 1 a 4!");

            for (int temporizador = 3; temporizador>0; temporizador--) {
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
                while (getchar() != '\n');

                printf("|------------------------------------------|\n");
                printf("|---- A D I C I O N A R  T A R E F A S ----|\n");
                printf("|------------------------------------------|\n");
                printf("|-- Pressione ENTER. para voltar ao MENU --|\n");
                printf("|------------------------------------------|\n\n");

                if (tarefa < 5) {
                    for (int i = 0; i < tarefa; i++) 
                    {
                        printf("%i. %s", i+1, tarefas[i]);
                    }
                } else {
                    printf("...\n");
                    for (int i = tarefa - 4; i < tarefa; i++) 
                    {
                        printf("%i. %s", i+1, tarefas[i]);
                    }
                }

                printf("\n%i. ", tarefa+1);
                fgets(tarefas[tarefa], 101, stdin);

                if ((tarefas[tarefa][0]) != '\n') {
                    if (strlen(tarefas[tarefa]) > 0) {
                        tarefa++;
                    }
                } else {
                    system("cls");
                    continue;
                }

                system("cls");
            break;

            case 2: 
                system("cls");
                while (getchar() != '\n');

                printf("|-----------------------------------------|\n");
                printf("|----- L I S T A  D E  T A R E F A S -----|\n");
                printf("|-----------------------------------------|\n");
                printf("|-- Pressione ENTER para voltar ao MENU --|\n");
                printf("|-----------------------------------------|\n");

                if (tarefa == 1) {
                    printf("|--------- Voce possui 1 tarefa. ---------|\n");
                } else {
                    printf("|--------- Voce possui %i tarefas ---------|\n", tarefa);
                }

                printf("|-----------------------------------------|\n\n");

                if(tarefa > 0) {
                    for (int i = 0; i < tarefa; i++) {
                        printf("%i. %s", i+1, tarefas[i]);
                    }
                }

                while (opcao != '\n') {
                    scanf("%c", &opcao);
                }

                system("cls");

            break;

            case 3:
                system("cls");
                while (getchar() != '\n');

                printf("|------------------------------------------|\n");
                printf("|---- P E S Q U I S A R  T A R E F A S ----|\n");
                printf("|------------------------------------------|\n");
                printf("|-- Pressione ENTER. para voltar ao MENU --|\n");
                printf("|------------------------------------------|\n");

                if (tarefa == 1) {
                    printf("|---------- Voce possui 1 tarefa. ----------|\n");
                    printf("|------------------------------------------|\n");
                } else {
                    printf("|--------- Voce possui %i tarefas. ---------|\n", tarefa);                    
                    printf("|------------------------------------------|\n");
                }
                
                while (opcao != '\n') {
                    scanf("%c", &opcao);
                }

                system("cls");
            break;

            case 4:
                system("cls");
                printf("---- S A I N D O ----\n");
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