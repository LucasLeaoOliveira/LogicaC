#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*1. A quilometragem inicial de um carro � 200000. Depois de uma viagem, a quilometragem final
        do carro ficou em 205701. Fazer um programa para ler do teclado estes valores armazenando
        em vari�veis, depois calcular e armazenar a dist�ncia percorrida do carro e finalmente
        apresent�-la.*/

    float kmInicial,kmFinal;

    printf("Escreva a quilometragem inicial do seu carro: ");
    scanf("%f",&kmInicial);
    fflush(stdin);
    printf("Escreva a quilometragem final do seu carro: ");
    scanf("%f",kmFinal);

    float distPercorrida = (kmFinal - kmInicial);

    printf(" A dist�ncia percorrida: %f \n" ,distPercorrida);
    printf("................................................");

    return 0;
}
