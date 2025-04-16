#include <stdio.h>
#include <locale.h>

/*
02. Faça um programa que receba três notas,
    calcule e mostre a média aritmética.
    (utilizando vetor)
*/

int main() {
    // Configura o idioma para Português
    setlocale(LC_ALL, "Portuguese");

    float notas[3];
    float soma_notas = 0;
    float media_notas = 0;

    printf("--------- Soma e média de notas ---------\n\n");

    // Recebe as 3 notas e calcula a soma
    for (int i = 0; i < 3; i++) {
        printf("Digite a nota [%d] do aluno: ", i + 1);
        scanf("%f", &notas[i]);

        soma_notas += notas[i];
    }

    // Calcula a média
    media_notas = soma_notas / 3.0;

    // Exibe o resultado
    printf("Média das notas do aluno: %.2f\n", media_notas);

    return 0;
}
