#include <stdio.h>
#include <locale.h>

/*
03. Fa�a um programa que receba tr�s notas,
    calcule e mostre a m�dia aritm�tica.
    (utilizando vari�veis separadas)
*/

int main() {
    // Configura o idioma para Portugu�s
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3;
    float media = 0;

    printf("--------- Soma e m�dia de notas ---------\n\n");

    // Recebe as 3 notas do usu�rio
    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3 do aluno: ");
    scanf("%f", &nota3);

    // Calcula a m�dia
    media = (nota1 + nota2 + nota3) / 3.0;

    // Exibe o resultado
    printf("M�dia das notas do aluno: %.2f\n", media);

    return 0;
}
