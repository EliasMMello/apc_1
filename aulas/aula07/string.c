#include <stdio.h>
#include <string.h>

int main() {

    char nome[31] = "a";

    // nome[0] = 'e';
    // nome[1] = 'l';
    // nome[2] = 'i';
    // nome[3] = 'a';
    // nome[4] = 's';
    // nome[5] = '\0';

    printf("Seu nome: %s\n", nome);

    printf("Entre com o seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Seu nome: %s", nome);

    // funcoes do string.h
    
    // preenche um string com um caractere
    // memset(nome, 'A', sizeof(nome));

    memset(nome, 'A', 10);

    printf("Seu nome: %s", nome);

    // copia string
    strcpy(nome, "Reginaldo");

    // concatena string
    strcat(nome, "Jose");

    // tamanho da string
    printf("Seu nome tem %i caracteres.\n", strlen(nome));

    // compara string
    printf("As strings '%s' e '%s' sao iguais? %i\n", "Jose", nome, strcmp("Jose", nome));
    printf("As strings '%s' e '%s' sao iguais? %i\n", "Jose", nome, strcmp(nome, "Jose"));

    return 0;
}