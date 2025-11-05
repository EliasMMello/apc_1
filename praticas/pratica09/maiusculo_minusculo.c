#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char string[11];
    char maiusculo[11];
    char minusculo[11];

    printf("Digite uma string: ");
    scanf("%s", &string);

    memset(maiusculo,'\0', sizeof(string));
    memset(minusculo,'\0', sizeof(string));

    for (int i=0; i<strlen(string); i++) 
    {
        maiusculo[i] = toupper(string[i]);
        minusculo[i] = tolower(string[i]);
    }

    printf("%s \n%s", maiusculo, minusculo);

    return 0;
}