#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valorA, valorB, media;

    printf("Digite um valor: ");
    scanf("%f",&valorA);
    printf("Digite outro valor: ");
    scanf("%f",&valorB);
    media = (valorA+valorB)/ 2;
    printf("(%.2f + %.2f)/2 = %.2f \n", valorA,valorB,media);
    printf("a media foi: %.2f",media);



    return 0;
}
