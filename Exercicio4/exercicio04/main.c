#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1,n2,n3,n4,n5,media;
    char nome[100]; // Declara um array de caracteres para armazenar o nome

    printf("Digite seu nome: ");
    gets(nome); // Lê o nome do usuário
    fflush(stdin);
    printf("Digite a nota 1: ");
    scanf("%d",&n1);
    printf("Digite a nota 2: ");
    scanf("%d",&n2);
    printf("Digite a nota 3: ");
    scanf("%d",&n3);
    printf("Digite a nota 4: ");
    scanf("%d",&n4);
    printf("Digite a nota 5: ");
    scanf("%d",&n5);

    media = (n1+n2+n3+n4+n5)/(5);


    printf("Olá, %s! sua media: %d \n",nome,media); // Exibe uma saudação com o nome

    return 0;
}
