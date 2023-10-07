#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("digite um numero: ");
    scanf("%d",&numero);
    if(numero > 0){
        printf("O numero que foi lido, positivo %d ", numero);

    }
    else{
      printf("O numero que foi lido, negativo %d ", numero);
    }
    return 0;
}
