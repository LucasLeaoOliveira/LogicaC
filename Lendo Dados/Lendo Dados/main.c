#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB, resultado;

    printf("Digite um valor");
    scanf("%d",&valorA);
    printf("Digite outro valor ");
    scanf("%d",&valorB);
    resultado = valorA + valorB;
    printf("Resultado: %d \n",resultado);
    printf("%d + %d = %d \n",valorA,valorB,resultado);
    return 0;

}
