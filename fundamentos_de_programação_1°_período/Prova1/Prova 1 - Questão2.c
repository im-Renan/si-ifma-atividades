#include  <stdio.h>     // Biblioteca padr�o para entrada e sa�da
#include <locale.h>     // Biblioteca para configurar acentua��o

int main () {
    setlocale (LC_ALL,"Portuguese"); // Configura o idioma para portugu�s (acentos, etc)

    float notas_alunos [5];   // Vetor para armazenar as 5 notas dos alunos
    float maior = 0, menor = 10; // Vari�veis para guardar a maior e menor nota
    float soma = 0, media;        // Vari�vel para somar as notas e calcular a m�dia (OBS: soma precisa ser inicializada!)

    // Loop para ler as notas dos 5 alunos
    for (int i = 0; i < 5; i++) {
        printf ("Digite a nota do aluno [%d]: ", i + 1);  // Mostra o n�mero do aluno (come�a em 1)
        scanf ("%f", &notas_alunos[i]);                   // L� a nota e armazena no vetor

        soma += notas_alunos[i]; // Adiciona a nota � soma total

        // Verifica se a nota atual � a maior at� agora
        if (notas_alunos[i] > maior) {
            maior = notas_alunos[i];
        }

        // Verifica se a nota atual � a menor at� agora
        if (notas_alunos[i] < menor) {
            menor = notas_alunos[i];
        }
    }

    // Calcula a m�dia
    media = soma / 5;

    // Mostra os resultados
    printf("\nMaior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("M�dia da turma: %.2f\n", media);

    return 0;
}
