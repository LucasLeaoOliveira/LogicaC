#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

        if(numero > 0){

        printf("positivo \n");
        }

        else if( numero < 0){

        printf("Negativo \n");
        }

        else{
        printf("Zero \n");
        }


 return 0;
}
