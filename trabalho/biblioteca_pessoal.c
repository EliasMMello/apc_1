#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>  // Para validação e limpeza de buffer
#include <unistd.h> // Para sleep()

struct Livro {
    int id;
    char titulo[100];
    char autor[50];
    int ano;
};

int main() {
    // No Windows, use "cls". No Linux/Mac, "clear".
    system("cls"); 

    struct Livro biblioteca[100];
    int totalLivros = 0;
    int opcao = 0;

    while (opcao != 4) {
        printf("----------------------------------\n");
        printf("--- MINHA BIBLIOTECA PESSOAL ---\n");
        printf("----------------------------------\n");
        printf("1. Adicionar Livro\n");
        printf("2. Listar Todos os Livros\n");
        printf("3. Buscar Livro por Autor\n");
        printf("4. Sair\n");
        printf("----------------------------------\n");
        printf("Escolha uma opcao: ");

        int c; // Para limpeza de buffer

        if (scanf("%d", &opcao) != 1) {
            system("cls");
            printf("Erro: Entrada invalida. Digite um NUMERO de 1 a 4.\n");
            while ((c = getchar()) != '\n' && c != EOF); // Limpa buffer
            sleep(2);
            system("cls");
            opcao = 0; // Reseta a opção para não sair do loop
            continue;
        }

        while ((c = getchar()) != '\n' && c != EOF); // Limpa o '\n' do scanf

        switch (opcao) {
            case 1:
                system("cls");
                if (totalLivros >= 100) {
                    printf("Erro: Biblioteca cheia!\n");
                    sleep(2);
                    system("cls");
                } else {
                    printf("--- Adicionar Novo Livro ---\n");
                    struct Livro novoLivro;
                    novoLivro.id = totalLivros + 1;

                    printf("Digite o Titulo: ");
                    fgets(novoLivro.titulo, 100, stdin);
                    novoLivro.titulo[strcspn(novoLivro.titulo, "\n")] = 0;

                    printf("Digite o Autor: ");
                    fgets(novoLivro.autor, 50, stdin);
                    novoLivro.autor[strcspn(novoLivro.autor, "\n")] = 0;

                    printf("Digite o Ano de Publicacao: ");
                    while (scanf("%d", &novoLivro.ano) != 1 || novoLivro.ano < 0 || novoLivro.ano > 2025) {
                        printf("Ano invalido! Digite um ano realista (ex: 2023): ");
                        while ((c = getchar()) != '\n' && c != EOF); // Limpa buffer
                    }
                    while ((c = getchar()) != '\n' && c != EOF); // Limpa o '\n' do scanf

                    biblioteca[totalLivros] = novoLivro;
                    totalLivros++;

                    printf("\nLivro ID %d adicionado com sucesso!\n", novoLivro.id);
                    sleep(2);
                    system("cls");
                }
                break;

            case 2:
                system("cls");
                printf("--- Todos os Livros Cadastrados ---\n\n");
                if (totalLivros == 0) {
                    printf("Nenhum livro na biblioteca.\n");
                } else {
                    for (int i = 0; i < totalLivros; i++) {
                        printf("ID:   %d\n", biblioteca[i].id);
                        printf("Titulo: %s\n", biblioteca[i].titulo);
                        printf("Autor:  %s\n", biblioteca[i].autor);
                        printf("Ano:    %d\n", biblioteca[i].ano);
                        printf("-----------------------------\n");
                    }
                }
                printf("\nPressione Enter para voltar ao menu...");
                getchar(); // Espera o usuário pressionar Enter
                system("cls");
                break;

            case 3:
                system("cls");
                printf("--- Buscar Livro por Autor ---\n");
                if (totalLivros == 0) {
                    printf("Nenhum livro na biblioteca para buscar.\n");
                    sleep(2);
                    system("cls");
                    break;
                }
                
                char autorBusca[50];
                int encontrados = 0;
                
                printf("Digite o nome do autor (ou parte dele): ");
                fgets(autorBusca, 50, stdin);
                autorBusca[strcspn(autorBusca, "\n")] = 0;

                printf("\nResultados da busca por \"%s\":\n", autorBusca);
                
                for (int i = 0; i < totalLivros; i++) {
                    // strstr verifica se 'autorBusca' é uma substring de 'biblioteca[i].autor'
                    // é case-sensitive, mas mais simples de implementar
                    if (strstr(biblioteca[i].autor, autorBusca) != NULL) {
                        printf("-----------------------------\n");
                        printf("ID:   %d\n", biblioteca[i].id);
                        printf("Titulo: %s\n", biblioteca[i].titulo);
                        printf("Autor:  %s\n", biblioteca[i].autor);
                        printf("Ano:    %d\n", biblioteca[i].ano);
                        encontrados++;
                    }
                }

                if (encontrados == 0) {
                    printf("\nNenhum livro encontrado para este autor.\n");
                } else {
                    printf("-----------------------------\n");
                    printf("%d livro(s) encontrado(s).\n", encontrados);
                }

                printf("\nPressione Enter para voltar ao menu...");
                getchar();
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