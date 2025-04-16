#include <stdio.h>
#include <locale.h>

/*
01. Faça um programa que receba quatro números inteiros,
    calcule e mostre a soma e a média desses números.
    (versão sem vetor e sem laço)
*/

int main() {
    // Configura o idioma para Português
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, num4;
    int soma, media;

    printf("---------- Soma e média de números (sem vetor e sem laço) ----------\n\n");

    printf("Digite o 1° número: ");
    scanf("%d", &num1);

    printf("Digite o 2° número: ");
    scanf("%d", &num2);

    printf("Digite o 3° número: ");
    scanf("%d", &num3);

    printf("Digite o 4° número: ");
    scanf("%d", &num4);

    // Calcula a soma e a média
    soma = num1 + num2 + num3 + num4;
    media = soma / 4;

    // Exibe os resultados
    printf("A soma dos números é: %d\n", soma);
    printf("A média dos números é: %d\n", media);

    return 0;
}
