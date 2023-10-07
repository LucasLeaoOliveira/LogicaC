#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int anoNascimento;
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    // Obtém o ano atual
    time_t agora;
    time(&agora);
    struct tm *dataAtual = localtime(&agora);
    int anoAtual = dataAtual -> tm_year + 1900;

    // Calcula a idade
    int idade = anoAtual - anoNascimento;

    // Calcula a quantidade de dias, horas, minutos e segundos vividos
    long segundosVividos = idade * 365 * 24 * 60 * 60;
    long minutosVividos = segundosVividos / 60;
    long horasVividas = minutosVividos / 60;
    long diasVividos = horasVividas / 24;

    printf("Idade: %d anos\n", idade);
    printf("Dias vividos: %ld dias\n", diasVividos);
    printf("Horas vividas: %ld horas\n", horasVividas);
    printf("Minutos vividos: %ld minutos\n", minutosVividos);
    printf("Segundos vividos: %ld segundos\n", segundosVividos);

    return 0;
}


