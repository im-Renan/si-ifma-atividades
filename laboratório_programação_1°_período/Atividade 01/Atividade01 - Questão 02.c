#include <stdio.h>
#include <locale.h>

/*
03. Faça um programa que receba três notas,
    calcule e mostre a média aritmética.
    (utilizando variáveis separadas)
*/

int main() {
    // Configura o idioma para Português
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3;
    float media = 0;

    printf("--------- Soma e média de notas ---------\n\n");

    // Recebe as 3 notas do usuário
    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3 do aluno: ");
    scanf("%f", &nota3);

    // Calcula a média
    media = (nota1 + nota2 + nota3) / 3.0;

    // Exibe o resultado
    printf("Média das notas do aluno: %.2f\n", media);

    return 0;
}
