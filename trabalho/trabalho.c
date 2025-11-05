#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {

    system("cls");

    int opcao;
    int tarefa = 0;

    char tarefas[10][101];

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

            for (int temporizador = 5; temporizador>0; temporizador--) {
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

                printf("Adicione uma nova tarefa:\n");
                printf("%i. ", tarefa+1);
                fgets(tarefas[tarefa], 101, stdin);

                if (strlen(tarefas[tarefa]) > 0) {
                    tarefa++;
                }

                system("cls");

            break;

            case 2: 
                system("cls");

                printf("Estas sao suas tarefas: \n");

                if(tarefa == 0) {
                    printf("Sem Tarefas!");
                } else {
                    for (int i = 0; i < tarefa; i++) 
                    {
                        printf("%i. %s", i+1, tarefas[i]);
                    }
                }

                for (int temporizador = 5; temporizador>0; temporizador--) 
                {
                    printf("\n%i...", temporizador);
                    sleep(1);
                }

                system("cls");

            break;

            case 3: 
                system("cls");
                printf("Escolha uma tarefa para marcar como concluida: \n");
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