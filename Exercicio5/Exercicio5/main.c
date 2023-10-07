#include <stdio.h>
#include <stdlib.h>

int main()
{
float receita_anual, despesa_anual, lucro;

    // Solicita ao usu�rio que insira a receita anual da empresa
    printf("Insira a receita anual da empresa: R$ ");
    scanf("%f", &receita_anual);

    // Solicita ao usu�rio que insira a despesa anual da empresa
    printf("Insira a despesa anual da empresa: R$ ");
    scanf("%f", &despesa_anual);

    // Calcula o lucro obtido pela empresa
    lucro = receita_anual - despesa_anual;

    printf("O lucro foi de: %f \n",lucro);


    // Verifica se a empresa obteve lucro, preju�zo ou lucro zero

    if (lucro > 0) {
        printf("A empresa obteve um lucro de R$ %.2f.\n", lucro);
    } else if (lucro < 0) {
        printf("A empresa teve um preju�zo de R$ %.2f.\n", -lucro);
    } else {
        printf("A empresa n�o obteve lucro nem preju�zo, o lucro � zero.\n");
    }

    return 0;
}
