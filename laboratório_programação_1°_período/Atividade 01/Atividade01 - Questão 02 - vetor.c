#include <stdio.h>
#include <locale.h>

/*
02. Fa�a um programa que receba tr�s notas,
    calcule e mostre a m�dia aritm�tica.
    (utilizando vetor)
*/

int main() {
    // Configura o idioma para Portugu�s
    setlocale(LC_ALL, "Portuguese");

    float notas[3];
    float soma_notas = 0;
    float media_notas = 0;

    printf("--------- Soma e m�dia de notas ---------\n\n");

    // Recebe as 3 notas e calcula a soma
    for (int i = 0; i < 3; i++) {
        printf("Digite a nota [%d] do aluno: ", i + 1);
        scanf("%f", &notas[i]);

        soma_notas += notas[i];
    }

    // Calcula a m�dia
    media_notas = soma_notas / 3.0;

    // Exibe o resultado
    printf("M�dia das notas do aluno: %.2f\n", media_notas);

    return 0;
}
