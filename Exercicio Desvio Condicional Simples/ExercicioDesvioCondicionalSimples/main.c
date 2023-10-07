#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("digite um numero: ");
    scanf("%d",&numero);


    if(numero == 100){
        printf("Numero digitado foi 100");

    }

    else{
        printf("NÃO foi CEM");
    }
    return 0;
}
