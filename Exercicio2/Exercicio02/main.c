#include <stdio.h>
#include <stdlib.h>

int main() {
    float raio, altura, volume;

    // Leitura do raio e da altura da lata de óleo
    printf("Digite o valor do raio da lata de óleo: ");
    scanf("%f", &raio);

    printf("Digite o valor da altura da lata de óleo: ");
    scanf("%f", &altura);

    // Cálculo do volume da lata de óleo
    volume = 3.14159 * raio * raio * altura;

    // Apresentação do volume da lata de óleo
    printf("O volume da lata de óleo é: %.2f unidades cúbicas\n", volume);

    return 0;
}
