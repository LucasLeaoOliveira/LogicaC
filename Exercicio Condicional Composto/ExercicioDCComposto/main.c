#include <stdio.h>

int main() {
    char nome[100];
    float nota1, nota2, media;

    // Solicita o nome do aluno
    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);

    // Solicita as duas notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Calcula a média
    media = (nota1 + nota2) / 2;

    // Verifica se o aluno foi aprovado ou reprovado
    if (media >= 7.0) {
        printf("Aluno %sfoi aprovado.\n", nome);
    } else {
        printf("Aluno %sfoi reprovado.\n", nome);
    }

    return 0;
}
