#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    if (numero > 0){
            printf("O numero digitado positivo foi: %d ", numero);
        }
    else{
        printf("O numero digitado negativo foi: %d",numero);
    }

    return 0;
}
