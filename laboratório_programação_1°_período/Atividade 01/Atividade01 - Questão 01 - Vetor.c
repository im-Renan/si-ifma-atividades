#include <stdio.h>
#include <locale.h>

/*
01. Fa�a um programa que receba quatro n�meros inteiros,
    calcule e mostre a soma e a m�dia desses n�meros.
*/

int main() {
    // Configura o idioma para Portugu�s
    setlocale(LC_ALL, "Portuguese");

    int numeros[4];
    int soma = 0;
    int media = 0;

    printf("---------- Soma e m�dia de n�meros ----------\n\n");

    // Recebe os 4 n�meros e calcula a soma
    for (int i = 0; i < 4; i++) {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    // Calcula a m�dia
    media = soma / 4;

    // Exibe os resultados
    printf("A soma dos n�meros �: %d\n", soma);
    printf("A m�dia dos n�meros �: %d\n", media);

    return 0;
}
