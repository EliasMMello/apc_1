#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h> 

struct Tarefa {
    int id;
    char descricao[100];
    int status; 
};

int main() {
    system("cls");

    struct Tarefa listaDeTarefas[100];
    int totalTarefas = 0;
    int opcao = 0;

    while (opcao != 4) {
        printf("--------------------------\n");
        printf("--- LISTA DE TAREFAS ---\n");
        printf("--------------------------\n");
        printf("1. Adicionar Tarefa\n");
        printf("2. Listar Tarefas\n");
        printf("3. Marcar como Concluida\n");
        printf("4. Sair\n");
        printf("--------------------------\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            system("cls");
            printf("Entrada invalida! Digite um NUMERO de 1 a 4.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            sleep(2);
            system("cls");
            opcao = 0; 
            continue;
        }

        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        switch (opcao) {
            case 1:
                system("cls");
                if (totalTarefas >= 100) {
                    printf("Erro: Lista de tarefas cheia!\n");
                    sleep(2);
                    system("cls");
                } else {
                    printf("--- Adicionar Nova Tarefa ---\n");
                    printf("Digite a descricao: ");
                    
                    fgets(listaDeTarefas[totalTarefas].descricao, 100, stdin);
                    listaDeTarefas[totalTarefas].descricao[strcspn(listaDeTarefas[totalTarefas].descricao, "\n")] = 0;

                    listaDeTarefas[totalTarefas].id = totalTarefas + 1;
                    listaDeTarefas[totalTarefas].status = 0; 
                    totalTarefas++;

                    printf("\nTarefa #%d adicionada com sucesso!\n", totalTarefas);
                    sleep(2);
                    system("cls");
                }
                break;

            case 2:
                system("cls");
                printf("--- Tarefas Cadastradas ---\n\n");
                if (totalTarefas == 0) {
                    printf("Nenhuma tarefa na lista.\n");
                } else {
                    for (int i = 0; i < totalTarefas; i++) {
                        printf("ID: %d | Status: [%s]\n", 
                               listaDeTarefas[i].id, 
                               listaDeTarefas[i].status == 0 ? "Pendente" : "Concluida");
                        printf("   Descricao: %s\n", listaDeTarefas[i].descricao);
                        printf("-----------------------------\n");
                    }
                }
                printf("\nPressione Enter para voltar ao menu...");
                getchar(); 
                system("cls");
                break;

            case 3:
                system("cls");
                printf("--- Marcar Tarefa como Concluida ---\n");
                if (totalTarefas == 0) {
                    printf("Nenhuma tarefa para marcar.\n");
                    sleep(2);
                    system("cls");
                    break; 
                }

                int idParaMarcar;
                int encontrado = 0;
                printf("Digite o ID da tarefa a ser concluida: ");

                if (scanf("%d", &idParaMarcar) != 1) {
                    printf("Erro! ID deve ser um numero.\n");
                    while ((c = getchar()) != '\n' && c != EOF);
                    sleep(2);
                    system("cls");
                    break;
                }

                if (idParaMarcar <= 0 || idParaMarcar > totalTarefas) {
                    printf("Erro! ID %d nao encontrado.\n", idParaMarcar);
                } else {
                    int indice = idParaMarcar - 1;
                    if (listaDeTarefas[indice].status == 1) {
                        printf("Tarefa %d ja estava marcada como concluida.\n", idParaMarcar);
                        encontrado = 1;
                    } else {
                        listaDeTarefas[indice].status = 1;
                        printf("Tarefa %d marcada como concluida!\n", idParaMarcar);
                        encontrado = 1;
                    }
                }

                if (encontrado == 0) {
                     printf("ID %d invalido ou nao encontrado.\n", idParaMarcar);
                }
                
                sleep(3);
                system("cls");
                break;

            case 4:
                system("cls");
                printf("Saindo...\n");
                sleep(1);
                break;

            default:
                system("cls");
                printf("Opcao invalida! Digite um numero de 1 a 4.\n");
                sleep(2);
                system("cls");
                break;
        }
    }

    return 0;
}