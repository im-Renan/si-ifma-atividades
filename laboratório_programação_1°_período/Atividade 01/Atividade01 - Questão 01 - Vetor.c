#include <stdio.h>
#include <locale.h>

/*
01. Faça um programa que receba quatro números inteiros,
    calcule e mostre a soma e a média desses números.
*/

int main() {
    // Configura o idioma para Português
    setlocale(LC_ALL, "Portuguese");

    int numeros[4];
    int soma = 0;
    int media = 0;

    printf("---------- Soma e média de números ----------\n\n");

    // Recebe os 4 números e calcula a soma
    for (int i = 0; i < 4; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    // Calcula a média
    media = soma / 4;

    // Exibe os resultados
    printf("A soma dos números é: %d\n", soma);
    printf("A média dos números é: %d\n", media);

    return 0;
}
