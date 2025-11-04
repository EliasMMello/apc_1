#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

// (Restrição d: Definindo a estrutura de dados)
struct Ranking {
    char nomeVencedor[50];
    int movimentos;
};

int main() {

    system("cls");

    int numero = 0;

    char tabuleiro[3][3] = {
        {'7', '8', '9'},
        {'4', '5', '6'},
        {'1', '2', '3'}
    };
    
    // (Restrição d: Uso de Estrutura em um Array)
    // Armazenamento em memória para o ranking (máx 5 entradas)
    struct Ranking ranking[5];
    int rankingCount = 0;

    while (numero != 3) {
        printf("---------------------\n");
        printf("------ M E N U ------\n");
        printf("---------------------\n");
        printf("1. Jogar\n");
        printf("2. Ranking\n");
        printf("3. Sair\n");
        printf("---------------------\n");
        
        if (scanf("%i", &numero) != 1) 
        {
            printf("Entrada invalida! Digite um NUMERO.\n");

            while (getchar() != '\n'); 
            sleep(2);
            system("cls");

            numero = 0;

            continue;
        }

        switch (numero) {
            case 1: {
                system("cls");
                printf("Voce entrou no jogo!\n");

                tabuleiro[0][0] = '7'; 
                tabuleiro[0][1] = '8'; 
                tabuleiro[0][2] = '9';
                tabuleiro[1][0] = '4'; 
                tabuleiro[1][1] = '5'; 
                tabuleiro[1][2] = '6';
                tabuleiro[2][0] = '1'; 
                tabuleiro[2][1] = '2'; 
                tabuleiro[2][2] = '3';

                char jogadorAtual = 'X';
                int movimentos = 0;
                char escolha;
                int jogadaValida;
                int vitoria = 0;

                while (vitoria == 0 && movimentos < 9) {
                    
                    system("cls");
                    printf("   Jogador Atual: %c\n", jogadorAtual);
                    printf("---|---|---\n");

                    for (int i = 0; i < 3; i++) 
                    {
                        for (int j = 0; j < 3; j++) 
                        {
                            printf(" %c ", tabuleiro[i][j]);

                            if (j < 2) {
                                printf("|");
                            }
                        }
                        printf("\n");
                        printf("---|---|---\n");
                    }
                    
                    printf("\nSelecione um numero (1-9): ");
                    
                    scanf(" %c", &escolha);

                    jogadaValida = 0;

                    if (escolha >= '1' && escolha <= '9') {

                        for (int i = 0; i < 3; i++) 
                        {
                            for (int j = 0; j < 3; j++) 
                            {
                                if (tabuleiro[i][j] == escolha) {
                                    tabuleiro[i][j] = jogadorAtual;
                                    jogadaValida = 1;
                                }
                            }
                        }
                    }

                    if (jogadaValida == 0) {
                        printf("Jogada invalida ou casa ja ocupada. Tente novamente.\n");
                        sleep(2);
                        continue;
                    }

                    movimentos++;

                    for (int i = 0; i < 3; i++) 
                    {
                        if (tabuleiro[i][0] == jogadorAtual && tabuleiro[i][1] == jogadorAtual && tabuleiro[i][2] == jogadorAtual) {
                            vitoria = 1;
                        }
                        if (tabuleiro[0][i] == jogadorAtual && tabuleiro[1][i] == jogadorAtual && tabuleiro[2][i] == jogadorAtual) {
                            vitoria = 1;
                        }
                    }

                    if (tabuleiro[0][0] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][2] == jogadorAtual) {
                        vitoria = 1;
                    }
                    if (tabuleiro[0][2] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][0] == jogadorAtual) {vitoria = 1;
                    }

                    if (vitoria == 1) {
                        system("cls");
                        printf("---|---|---\n");
                        for (int i = 0; i < 3; i++) 
                        {
                            for (int j = 0; j < 3; j++) 
                            {
                                printf(" %c ", tabuleiro[i][j]);

                                if (j < 2) {
                                    printf("|");
                                }
                            }
                            printf("\n---|---|---\n");
                        }
                        printf("\nJogador %c venceu em %d movimentos!\n", jogadorAtual, movimentos);
                        
                        if (rankingCount < 5) {
                            printf("Digite seu nome (sem espacos) para o Ranking: ");
                            scanf("%s", ranking[rankingCount].nomeVencedor);
                            ranking[rankingCount].movimentos = movimentos;
                            rankingCount++;
                        } else {
                            printf("Ranking cheio!\n");
                        }
                        
                        sleep(4);
                        
                    } else if (movimentos == 9) {
                        printf("\nDeu velha! (Empate)\n");
                        sleep(3);
                        
                    } else {

                        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
                    }
                }
                
                system("cls");
                break;
            }

            case 2:
                system("cls");
                printf("--- R A N K I N G (Top 5) ---\n");
                
                if (rankingCount == 0) {
                    printf("Nenhum jogo registrado ainda.\n");
                } else {

                    for (int i = 0; i < rankingCount; i++) {
                        printf("%d. %s - %d movimentos\n", 
                               i + 1, 
                               ranking[i].nomeVencedor, 
                               ranking[i].movimentos);
                    }
                }
                
                printf("------------------------------\n");
                printf("Pressione Enter para voltar ao menu...");
                
                // Limpa o buffer de entrada (do scanf anterior)
                while (getchar() != '\n'); 
                // Espera o usuário pressionar Enter
                getchar(); 
                
                system("cls");
                break;

            case 3:
                system("cls");
                printf("---------------------\n");
                printf("-----S A I N D O-----\n");
                printf("---------------------\n");
                sleep(1);
                system("cls");
                break;

            default:
                system("cls");
                // (Restrição c: Validação do range do menu)
                printf("Opcao invalida. Digite um numero de 1 a 3!\n");
                sleep(3);
                system("cls");
        }
    }

    return 0;
}