#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    char nome[80];


    printf("Digite uma letra");
    scanf("%c",&letra);
    printf("Letra digitada:%c\n",letra);

    fflush(stdin);

    printf("Letra digite um nome");
    gets(nome);
    printf("nome digitado:%s",nome);


    return 0;
}
