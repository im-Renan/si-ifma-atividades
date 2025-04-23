#include <stdio.h>
#include <locale.h>

/*04.  Faça um programa que receba o salário de um funcionário,
* calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%
*/
int main () {
    setlocale (LC_ALL,"Portuguese");

    float salario_atual, novo_salario;
    float aumento, bonus = 0.25;

    printf ("Digite o valor do seu salário: ");
    scanf ("%f",&salario_atual);

    aumento = salario_atual * bonus;
    novo_salario = aumento + salario_atual;

    printf ("Valor do seu salário atual: R$ %.2f\n",salario_atual);
    printf ("Valor do aumento: R$ %.2f\n", aumento);
    printf ("Valor do seu novo salário: R$ %.2f\n", novo_salario);

    return 0;
}
