#include <stdio.h>
#include <locale.h>

/*
04. Faça um programa que receba três notas e seus respectivos pesos,
    calcule e mostre a média ponderada.
*/

int main() {
    // Configura o idioma para Português
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3;
    float p1, p2, p3;
    float media_ponderada;

    // Recebe as notas e os pesos
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &p1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &p2);

    printf("\nDigite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite o peso da terceira nota: ");
    scanf("%f", &p3);

    // Calcula a média ponderada (corrigido)
    media_ponderada = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    // Exibe o resultado
    printf("\nA média ponderada das notas é: %.2f\n", media_ponderada);

    return 0;
}
