#include <stdio.h>     // Biblioteca padrão de entrada e saída
#include <locale.h>    // Biblioteca para configurar a localização (idioma)

int main () {
    setlocale (LC_ALL,"Portuguese"); // Permite usar acentos e caracteres do português

    float salario_atual, salario_final; // Armazena o salário atual e o salário final após reajuste
    int tempo_de_servico;              // Armazena o tempo de serviço em anos
    float reajuste = 0, bonus = 0;     // Armazena os valores de reajuste e bônus (inicialmente zero)

    // Entrada do salário atual
    printf ("Digite o valor do seu salário: ");
    scanf ("%f",&salario_atual);

    // Entrada do tempo de serviço
    printf ("Digite a quanto tempo você esta na empresa\n");
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
        reajuste = 0.0; // Acima de R$2000, não recebe reajuste
    }

    // Verifica o tempo de serviço para definir o bônus
    if (tempo_de_servico < 1) {
        bonus = 0.0; // Sem bônus
    } else if (tempo_de_servico <= 3) {
        bonus = 100.00;
    } else if (tempo_de_servico <= 6) {
        bonus = 200.00;
    } else if (tempo_de_servico <=10) {
        bonus = 300.00;
    } else {
        bonus = 500.00;
    }

    // Se o salário for maior que R$2000 e não recebeu reajuste, exibe aviso
    if (reajuste == 0 && salario_atual > 2000.00) {
        printf("Funcionario sem direito a aumento.\n");
    } else {
        // Caso contrário, calcula o salário final com reajuste + bônus
        salario_final = salario_atual + reajuste + bonus;
        printf("Salario reajustado: R$ %.2f\n", salario_final);
    }

    return 0;
}
