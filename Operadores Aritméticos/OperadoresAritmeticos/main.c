#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valorA, valorB;
    int soma, subtrair, multiplicar, dividir, resto;

    printf("Digite o primeiro numero: ");
    scanf("%d",&valorA);
    printf("Digite o outro valor: ");
    scanf("%d",&valorB);

    soma = valorA + valorB;
    subtrair = valorA - valorB;
    multiplicar = valorA*valorB;
    dividir = (valorA/valorB);
    resto = valorA % valorB;

    printf("a soma foi......: %d \n",soma);
    printf("a subtração foi.: %d \n",subtrair);
    printf("a produto foi...: %d \n",multiplicar);
    printf("a divisão foi...: %d \n",dividir);
    printf("o resto foi.....: %d ",resto);

        return 0;
}
















