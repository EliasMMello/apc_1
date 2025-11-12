#include <stdio.h>

int main() {
    const int LIMITE = 10;

    struct aluno_t {
        int matricula;
        char email[31]; 
    };

    struct aluno_t alunos[LIMITE];

    for (int i = 0; i < LIMITE; i++) {
        printf("Entre com os dados de matricula e email: ");
        scanf("%i %s", &alunos[i].matricula, alunos[i].email);
    }

    int matricula;

    printf("Entre com uma matricula: ");
    scanf("%i", &matricula);

    int achou = -1;

    for (int i = 0; i < LIMITE; i++) {
        if (matricula == alunos[i].matricula) {
            achou = i; break;
        }
    }

    if (achou < 0) {
        printf("Matricula nao localizada!\n");
    } else {
        printf("O email do aluno, matricula %i, eh %s\n", alunos[achou].matricula, alunos[achou].email);
    }

    return 0;
}