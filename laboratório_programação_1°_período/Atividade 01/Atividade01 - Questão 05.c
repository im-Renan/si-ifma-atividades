#include <stdio.h>
#include <locale.h>

/*
05.  Faça um programa que receba o salário de um funcionário e o percentual de aumento,
 calcule e mostre o valor do aumento e do novo salário.
*/
int main () {
    setlocale (LC_ALL,"Portuguese");

    float salario_atual, novo_salario;
    float percentual_aumento, aumento;

    printf ("Digite o valor do seu salário: ");
    scanf ("%f",&salario_atual);

    printf ("Digite o percentual de aumento: ");
    scanf ("%f",&percentual_aumento);

    aumento = salario_atual * (percentual_aumento / 100);
    novo_salario = aumento + salario_atual;

    printf ("Valor do seu salário atual: R$ %.2f\n",salario_atual);
    printf ("Valor do aumento: R$ %.2f\n", aumento);
    printf ("Valor do seu novo salário: R$ %.2f\n", novo_salario);

    return 0;
}

