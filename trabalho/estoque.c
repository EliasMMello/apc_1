#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>  // Para validação
#include <unistd.h> // Para sleep()

struct Produto {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

int main() {
    system("cls"); // Use "clear" em Linux/Mac

    struct Produto estoque[100];
    int totalProdutos = 0;
    int opcao = 0;

    while (opcao != 4) {
        printf("----------------------------------\n");
        printf("---   CONTROLE DE ESTOQUE   ---\n");
        printf("----------------------------------\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Listar Estoque\n");
        printf("3. Adicionar Estoque (Entrada)\n");
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
            opcao = 0; // Reseta a opção
            continue;
        }

        while ((c = getchar()) != '\n' && c != EOF); // Limpa o '\n' do scanf

        switch (opcao) {
            case 1: // Cadastrar Produto
                system("cls");
                if (totalProdutos >= 100) {
                    printf("Erro: Estoque cheio! Nao e possivel cadastrar.\n");
                    sleep(2);
                    system("cls");
                } else {
                    printf("--- Cadastro de Novo Produto ---\n");
                    struct Produto novoProduto;
                    int codigoInvalido = 1;
                    int codigoTemp;

                    // Validacao de Codigo (unico e positivo)
                    do {
                        printf("Digite o Codigo do produto (ex: 101): ");
                        if (scanf("%d", &codigoTemp) != 1) {
                            printf("Codigo deve ser um numero!\n");
                            while ((c = getchar()) != '\n' && c != EOF); // Limpa buffer
                            continue;
                        }
                        
                        if (codigoTemp <= 0) {
                            printf("Codigo deve ser um numero positivo!\n");
                            codigoInvalido = 1;
                            continue;
                        }

                        codigoInvalido = 0; 
                        for (int i = 0; i < totalProdutos; i++) {
                            if (estoque[i].codigo == codigoTemp) {
                                printf("Erro: Codigo %d ja existe!\n", codigoTemp);
                                codigoInvalido = 1;
                                break;
                            }
                        }
                    } while (codigoInvalido == 1);
                    
                    novoProduto.codigo = codigoTemp;
                    while ((c = getchar()) != '\n' && c != EOF); // Limpa buffer

                    printf("Digite o Nome do produto: ");
                    fgets(novoProduto.nome, 50, stdin);
                    novoProduto.nome[strcspn(novoProduto.nome, "\n")] = 0;

                    // Validacao de Quantidade
                    int qtdTemp = -1;
                    do {
                        printf("Digite a Quantidade inicial: ");
                        if (scanf("%d", &qtdTemp) != 1 || qtdTemp < 0) {
                            printf("Quantidade invalida! Deve ser 0 or mais.\n");
                            while ((c = getchar()) != '\n' && c != EOF); // Limpa buffer
                            qtdTemp = -1; // Força a repetição
                        }
                    } while (qtdTemp < 0);
                    novoProduto.quantidade = qtdTemp;
                    
                    // Validacao de Preco
                    float precoTemp = -1.0;
                    do {
                        printf("Digite o Preco (ex: 19.99): ");
                         if (scanf("%f", &precoTemp) != 1 || precoTemp < 0.0) {
                            printf("Preco invalido! Deve ser 0.0 ou mais.\n");
                            while ((c = getchar()) != '\n' && c != EOF); // Limpa buffer
                            precoTemp = -1.0; // Força a repetição
                        }
                    } while (precoTemp < 0.0);
                    novoProduto.preco = precoTemp;

                    estoque[totalProdutos] = novoProduto;
                    totalProdutos++;

                    printf("\nProduto '%s' (Cod: %d) cadastrado com sucesso!\n", novoProduto.nome, novoProduto.codigo);
                    sleep(3);
                    system("cls");
                }
                break;

            case 2: // Listar Estoque
                system("cls");
                printf("--- Relatorio de Estoque ---\n\n");
                if (totalProdutos == 0) {
                    printf("Estoque vazio. Nenhum produto cadastrado.\n");
                } else {
                    printf("------------------------------------------------------------------\n");
                    printf("| %-5s | %-30s | %-10s | %-10s |\n", "COD", "NOME", "QTD", "PRECO (R$)");
                    printf("------------------------------------------------------------------\n");
                    for (int i = 0; i < totalProdutos; i++) {
                        printf("| %-5d | %-30s | %-10d | R$ %-7.2f |\n", 
                               estoque[i].codigo, 
                               estoque[i].nome, 
                               estoque[i].quantidade, 
                               estoque[i].preco);
                    }
                    printf("------------------------------------------------------------------\n");
                }
                printf("\nPressione Enter para voltar ao menu...");
                getchar();
                system("cls");
                break;

            case 3: // Adicionar Estoque
                system("cls");
                printf("--- Entrada de Estoque ---\n");
                if (totalProdutos == 0) {
                    printf("Nenhum produto cadastrado para dar entrada.\n");
                    sleep(2);
                    system("cls");
                    break;
                }
                
                int codigoBusca;
                int indiceEncontrado = -1;

                printf("Digite o Codigo do produto para adicionar estoque: ");
                if (scanf("%d", &codigoBusca) != 1) {
                    printf("Erro! Codigo deve ser um numero.\n");
                    while ((c = getchar()) != '\n' && c != EOF);
                    sleep(2);
                    system("cls");
                    break;
                }

                for (int i = 0; i < totalProdutos; i++) {
                    if (estoque[i].codigo == codigoBusca) {
                        indiceEncontrado = i;
                        break;
                    }
                }

                if (indiceEncontrado == -1) {
                    printf("Erro: Produto com codigo %d nao encontrado.\n", codigoBusca);
                } else {
                    int qtdAdicionar = -1;
                    printf("Produto encontrado: %s | Estoque atual: %d\n", 
                           estoque[indiceEncontrado].nome, 
                           estoque[indiceEncontrado].quantidade);
                    
                    do {
                         printf("Digite a quantidade a ser ADICIONADA: ");
                         if (scanf("%d", &qtdAdicionar) != 1 || qtdAdicionar < 0) {
                            printf("Quantidade invalida! Deve ser 0 ou mais.\n");
                            while ((c = getchar()) != '\n' && c != EOF); // Limpa buffer
                            qtdAdicionar = -1;
                         }
                    } while (qtdAdicionar < 0);

                    estoque[indiceEncontrado].quantidade += qtdAdicionar;
                    printf("\nSucesso! Novo estoque de '%s' e: %d\n", 
                           estoque[indiceEncontrado].nome, 
                           estoque[indiceEncontrado].quantidade);
                }
                
                sleep(3);
                system("cls");
                break;

            case 4: // Sair
                system("cls");
                printf("Saindo do sistema...\n");
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