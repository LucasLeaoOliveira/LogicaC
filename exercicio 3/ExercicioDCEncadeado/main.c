#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nome[100];
   float salarioL,salarioB,taxaInss,desconto;

   printf("Escreva seu nome: ");
   gets(nome);
   printf("Escreva o valor do seu salario: ");
   scanf("%f",&salarioB);

   if(salarioB <= 1000){
    taxaInss = 8;
   }
    else if(salarioB <= 2000){
    taxaInss = 9;
   }
    else{
    taxaInss = 10;
   }



    desconto = salarioB*(taxaInss)/(100);

    salarioL = salarioB - desconto;

    printf("Nome do funcionario...:%s \n",nome);
    printf("Salario Bruto:  R$%10.2f \n",salarioB);
    printf("A taxa do inss foi de: %.2f%% \n",taxaInss);
    printf("O desconto foi de: R$ %10.2f \n",desconto);
    printf("Salario Liquio: R$ %10.2f \n",salarioL);


    return 0;
}
