#include <stdio.h>
#include <locale.h>

/*
01. Fa�a um programa que receba quatro n�meros inteiros,
    calcule e mostre a soma e a m�dia desses n�meros.
    (vers�o sem vetor e sem la�o)
*/

int main() {
    // Configura o idioma para Portugu�s
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, num4;
    int soma, media;

    printf("---------- Soma e m�dia de n�meros (sem vetor e sem la�o) ----------\n\n");

    printf("Digite o 1� n�mero: ");
    scanf("%d", &num1);

    printf("Digite o 2� n�mero: ");
    scanf("%d", &num2);

    printf("Digite o 3� n�mero: ");
    scanf("%d", &num3);

    printf("Digite o 4� n�mero: ");
    scanf("%d", &num4);

    // Calcula a soma e a m�dia
    soma = num1 + num2 + num3 + num4;
    media = soma / 4;

    // Exibe os resultados
    printf("A soma dos n�meros �: %d\n", soma);
    printf("A m�dia dos n�meros �: %d\n", media);

    return 0;
}
