#include <stdio.h>
#include <stdlib.h>

int main()
{
float receita_anual, despesa_anual, lucro;

    // Solicita ao usuário que insira a receita anual da empresa
    printf("Insira a receita anual da empresa: R$ ");
    scanf("%f", &receita_anual);

    // Solicita ao usuário que insira a despesa anual da empresa
    printf("Insira a despesa anual da empresa: R$ ");
    scanf("%f", &despesa_anual);

    // Calcula o lucro obtido pela empresa
    lucro = receita_anual - despesa_anual;

    printf("O lucro foi de: %f \n",lucro);


    // Verifica se a empresa obteve lucro, prejuízo ou lucro zero

    if (lucro > 0) {
        printf("A empresa obteve um lucro de R$ %.2f.\n", lucro);
    } else if (lucro < 0) {
        printf("A empresa teve um prejuízo de R$ %.2f.\n", -lucro);
    } else {
        printf("A empresa não obteve lucro nem prejuízo, o lucro é zero.\n");
    }

    return 0;
}
