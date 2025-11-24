#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    system("cls");

    int opcao = 0;
    int qtd_tarefas = 0;

    struct Tarefa {
        char descricao[101];
        int status;
    };

    struct Tarefa tarefas[50];

    while (opcao != 4) {

        printf("|---------------------------|\n");
        printf("|--------- M E N U ---------|\n");
        printf("|---------------------------|\n");
        printf("|   1. Adicionar Tarefa     |\n");
        printf("|   2. Listar Tarefas       |\n");
        printf("|   3. Alterar Status       |\n");
        printf("|   4. Sair                 |\n");
        printf("|---------------------------|\n");

        printf("\nSelecione um número de 1 a 4: ");
        int leu_certo = scanf("%d", &opcao);

        if (leu_certo != 1) {
            system("cls");
            printf("Opção inválida. Digite um número de 1 a 4!");

            while (getchar() != '\n');

            for (int temporizador = 3; temporizador > 0; temporizador--) {
                printf("\n%i...", temporizador);
                sleep(1);
            }

            system("cls");
            continue;
        }

        switch (opcao) 
        {
            case 1: // ADICIONAR TAREFAS
                system("cls");
                while (getchar() != '\n');

                printf("|------------------------------------------|\n");
                printf("|---- A D I C I O N A R  T A R E F A S ----|\n");
                printf("|------------------------------------------|\n");
                printf("|-- Pressione ENTER para voltar ao MENU ---|\n");
                printf("|------------------------------------------|\n\n");

                if (qtd_tarefas < 5) {
                    for (int i = 0; i < qtd_tarefas; i++) 
                    {
                        printf("%i. %s", i+1, tarefas[i].descricao);
                    }
                } else {
                    printf("...\n");
                    for (int i = qtd_tarefas - 4; i < qtd_tarefas; i++) 
                    {
                        printf("%i. %s", i+1, tarefas[i].descricao);
                    }
                }

                printf("\n%i. ", qtd_tarefas + 1);
                
                fgets(tarefas[qtd_tarefas].descricao, 101, stdin);

                if ((tarefas[qtd_tarefas].descricao[0]) != '\n') 
                {
                    if (strlen(tarefas[qtd_tarefas].descricao) > 0) 
                    {
                        tarefas[qtd_tarefas].status = 0;
                        qtd_tarefas++;
                        system("cls");
                    }
                } else {
                    system("cls");
                    continue;
                }

                system("cls");
            break;

            case 2: // LISTAR TAREFAS
                system("cls");
                while (getchar() != '\n');

                printf("|-----------------------------------------|\n");
                printf("|----- L I S T A  D E  T A R E F A S -----|\n");
                printf("|-----------------------------------------|\n");
                printf("|-- Pressione ENTER para voltar ao MENU --|\n");
                printf("|-----------------------------------------|\n");

                if (qtd_tarefas == 1) {
                    printf("|--------- Você possui 1 tarefa. ---------|\n");
                } else {
                    printf("|--------- Você possui %i tarefas ---------|\n", qtd_tarefas);
                }

                printf("|-----------------------------------------|\n\n");

                if(qtd_tarefas > 0) {
                    for (int i = 0; i < qtd_tarefas; i++) 
                    {
                        char texto_status[15];

                        if (tarefas[i].status == 0) {
                            strcpy(texto_status, "PENDENTE");
                        } else {
                            strcpy(texto_status, "CONCLUÍDA");
                        }

                        tarefas[i].descricao[strcspn(tarefas[i].descricao, "\n")] = 0;
                        
                        printf("%i. [%s] %s\n", i+1, texto_status, tarefas[i].descricao);
                        
                        strcat(tarefas[i].descricao, "\n");
                    }
                }

                getchar();
                system("cls");

            break;

            case 3: // ALTERAR STATUS
                system("cls");
                while (getchar() != '\n');

                printf("|------------------------------------------|\n");
                printf("|------- A L T E R A R  S T A T U S -------|\n");
                printf("|------------------------------------------|\n");
                printf("|-- Pressione ENTER para voltar ao MENU ---|\n");
                printf("|------------------------------------------|\n");
                printf("|- Digite o número da tarefa para alterar -|\n");
                printf("|------------------------------------------|\n\n");
                
                if(qtd_tarefas > 0) {

                    for (int i = 0; i < qtd_tarefas; i++) 
                    {
                        char texto_status[15];

                        if (tarefas[i].status == 0) {
                            strcpy(texto_status, "PENDENTE");
                        }
                        else {
                            strcpy(texto_status, "CONCLUÍDA");
                        }
                        
                        tarefas[i].descricao[strcspn(tarefas[i].descricao, "\n")] = 0;
                        
                        printf("%i. [%s] %s\n", i+1, texto_status, tarefas[i].descricao);
                        strcat(tarefas[i].descricao, "\n");
                    }

                    printf("\nNúmero da tarefa: ");

                    char enter[20];
                    fgets(enter, 20, stdin);

                    if (enter[0] == '\n') {
                        system("cls");
                        break; 
                    }

                    int id_alterar = atoi(enter);

                    if (id_alterar > 0 && id_alterar <= qtd_tarefas) {
                        if(tarefas[id_alterar-1].status == 0) {
                            tarefas[id_alterar-1].status = 1;
                        } else {
                            tarefas[id_alterar-1].status = 0;
                        }
                    } 
                    else {
                        printf("\nEntrada incorreta!\n");
                        sleep(1);
                    }

                } else {
                    printf("Nenhuma tarefa cadastrada.\n");
                    getchar();
                }

                system("cls");
            break;

            case 4: // SAIR
                system("cls");
                printf("---- S A I N D O ----\n");
                sleep(1);
                system("cls");
            break;

            default: // ERRO
                system("cls");
                printf("Opção inválida. Digite um número de 1 a 4!");
                
                for (int temporizador = 3; temporizador > 0; temporizador--) {
                    printf("\n%i...", temporizador);
                    sleep(1);
                }
                system("cls");
                while (getchar() != '\n'); 
        }
    }

    return 0;
}