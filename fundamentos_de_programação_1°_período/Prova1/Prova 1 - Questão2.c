#include  <stdio.h>     // Biblioteca padrão para entrada e saída
#include <locale.h>     // Biblioteca para configurar acentuação

int main () {
    setlocale (LC_ALL,"Portuguese"); // Configura o idioma para português (acentos, etc)

    float notas_alunos [5];   // Vetor para armazenar as 5 notas dos alunos
    float maior = 0, menor = 10; // Variáveis para guardar a maior e menor nota
    float soma = 0, media;        // Variável para somar as notas e calcular a média (OBS: soma precisa ser inicializada!)

    // Loop para ler as notas dos 5 alunos
    for (int i = 0; i < 5; i++) {
        printf ("Digite a nota do aluno [%d]: ", i + 1);  // Mostra o número do aluno (começa em 1)
        scanf ("%f", &notas_alunos[i]);                   // Lê a nota e armazena no vetor

        soma += notas_alunos[i]; // Adiciona a nota à soma total

        // Verifica se a nota atual é a maior até agora
        if (notas_alunos[i] > maior) {
            maior = notas_alunos[i];
        }

        // Verifica se a nota atual é a menor até agora
        if (notas_alunos[i] < menor) {
            menor = notas_alunos[i];
        }
    }

    // Calcula a média
    media = soma / 5;

    // Mostra os resultados
    printf("\nMaior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Média da turma: %.2f\n", media);

    return 0;
}
