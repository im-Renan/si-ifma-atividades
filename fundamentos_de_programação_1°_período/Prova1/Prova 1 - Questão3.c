#include <stdio.h>   // Biblioteca padr�o de entrada e sa�da
#include <math.h>    // Biblioteca para fun��es matem�ticas (pow e sqrt)
#include <locale.h>  // Biblioteca para permitir acentua��o (portugu�s)

int main() {
    setlocale (LC_ALL,"Portuguese"); // Ativa suporte ao portugu�s no terminal

    float x1, y1, x2, y2;     // Coordenadas dos dois pontos
    float distancia;          // Armazena a dist�ncia calculada entre os pontos

    // Leitura do primeiro ponto
    printf("Digite as coordenadas do primeiro ponto (x1,y1):\n");
    printf("(x1): ");
    scanf("%f", &x1);           // L� a coordenada x do primeiro ponto
    printf("(y1): ");
    scanf("%f", &y1);           // L� a coordenada y do primeiro ponto

    // Leitura do segundo ponto
    printf("\nDigite as coordenadas do segundo ponto (x2,y2):\n");
    printf("(x2): ");
    scanf("%f", &x2);           // L� a coordenada x do segundo ponto
    printf("(y2): ");
    scanf("%f", &y2);           // L� a coordenada y do segundo ponto

    // F�rmula da dist�ncia entre dois pontos:
    // dist�ncia = raiz quadrada de [(x2 - x1)� + (y2 - y1)�]
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Exibe o resultado formatado com 2 casas decimais
    printf("A dist�ncia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) �: %.2f\n",
           x1, y1, x2, y2, distancia);

    return 0;
}
