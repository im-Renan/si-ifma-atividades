#include <stdio.h>   // Biblioteca padrão de entrada e saída
#include <math.h>    // Biblioteca para funções matemáticas (pow e sqrt)
#include <locale.h>  // Biblioteca para permitir acentuação (português)

int main() {
    setlocale (LC_ALL,"Portuguese"); // Ativa suporte ao português no terminal

    float x1, y1, x2, y2;     // Coordenadas dos dois pontos
    float distancia;          // Armazena a distância calculada entre os pontos

    // Leitura do primeiro ponto
    printf("Digite as coordenadas do primeiro ponto (x1,y1):\n");
    printf("(x1): ");
    scanf("%f", &x1);           // Lê a coordenada x do primeiro ponto
    printf("(y1): ");
    scanf("%f", &y1);           // Lê a coordenada y do primeiro ponto

    // Leitura do segundo ponto
    printf("\nDigite as coordenadas do segundo ponto (x2,y2):\n");
    printf("(x2): ");
    scanf("%f", &x2);           // Lê a coordenada x do segundo ponto
    printf("(y2): ");
    scanf("%f", &y2);           // Lê a coordenada y do segundo ponto

    // Fórmula da distância entre dois pontos:
    // distância = raiz quadrada de [(x2 - x1)² + (y2 - y1)²]
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Exibe o resultado formatado com 2 casas decimais
    printf("A distância entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é: %.2f\n",
           x1, y1, x2, y2, distancia);

    return 0;
}
