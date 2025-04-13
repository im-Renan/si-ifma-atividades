#include <stdio.h>     // Biblioteca padr�o de entrada e sa�da
#include <locale.h>    // Biblioteca para configurar a localiza��o (idioma)

int main () {
    setlocale (LC_ALL,"Portuguese"); // Permite usar acentos e caracteres do portugu�s

    float salario_atual, salario_final; // Armazena o sal�rio atual e o sal�rio final ap�s reajuste
    int tempo_de_servico;              // Armazena o tempo de servi�o em anos
    float reajuste = 0, bonus = 0;     // Armazena os valores de reajuste e b�nus (inicialmente zero)

    // Entrada do sal�rio atual
    printf ("Digite o valor do seu sal�rio: ");
    scanf ("%f",&salario_atual);

    // Entrada do tempo de servi�o
    printf ("Digite a quanto tempo voc� esta na empresa\n");
    printf ("Digite o tempo em anos (ex: 1, 2, 3...). Digite 0 se for menor que 1 ano:\n");
    scanf ("%d",&tempo_de_servico);

    // Verifica a faixa salarial para calcular o reajuste proporcional
    if (salario_atual <= 500.00) {
        reajuste = salario_atual * 0.25; // 25% de aumento
    } else if (salario_atual > 500.00 && salario_atual <= 1000.00) {
        reajuste = salario_atual * 0.20; // 20% de aumento
    } else if (salario_atual > 1000.00 && salario_atual <= 1500.00) {
        reajuste = salario_atual * 0.15; // 15% de aumento
    } else if (salario_atual > 1500.00 && salario_atual <= 2000.00 ) {
        reajuste = salario_atual * 0.10; // 10% de aumento
    } else {
        reajuste = 0.0; // Acima de R$2000, n�o recebe reajuste
    }

    // Verifica o tempo de servi�o para definir o b�nus
    if (tempo_de_servico < 1) {
        bonus = 0.0; // Sem b�nus
    } else if (tempo_de_servico <= 3) {
        bonus = 100.00;
    } else if (tempo_de_servico <= 6) {
        bonus = 200.00;
    } else if (tempo_de_servico <=10) {
        bonus = 300.00;
    } else {
        bonus = 500.00;
    }

    // Se o sal�rio for maior que R$2000 e n�o recebeu reajuste, exibe aviso
    if (reajuste == 0 && salario_atual > 2000.00) {
        printf("Funcionario sem direito a aumento.\n");
    } else {
        // Caso contr�rio, calcula o sal�rio final com reajuste + b�nus
        salario_final = salario_atual + reajuste + bonus;
        printf("Salario reajustado: R$ %.2f\n", salario_final);
    }

    return 0;
}
