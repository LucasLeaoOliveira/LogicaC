#include <stdio.h>
#include <stdlib.h>

int main() {
    float raio, altura, volume;

    // Leitura do raio e da altura da lata de �leo
    printf("Digite o valor do raio da lata de �leo: ");
    scanf("%f", &raio);

    printf("Digite o valor da altura da lata de �leo: ");
    scanf("%f", &altura);

    // C�lculo do volume da lata de �leo
    volume = 3.14159 * raio * raio * altura;

    // Apresenta��o do volume da lata de �leo
    printf("O volume da lata de �leo �: %.2f unidades c�bicas\n", volume);

    return 0;
}
