#include <stdio.h>
#include <stdlib.h>

/*  Ler o nome e as 3 notas escolares de um aluno
    Calcular a média do aluno
    Mostrar o resultado da média*/

int main()
{
    char nome[80];
    float n1, n2, n3;

    printf("Digite p nome do aluno");
    gets(nome);
    fflush(stdin);
    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    float media = (n1+n2+n3)/3;

    printf("A media do aluno: %s é media %.2f \n", nome, media);

    return 0;



}
