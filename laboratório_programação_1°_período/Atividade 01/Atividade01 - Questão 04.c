#include <stdio.h>
#include <locale.h>

/*04.  Fa�a um programa que receba o sal�rio de um funcion�rio,
* calcule e mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%
*/
int main () {
    setlocale (LC_ALL,"Portuguese");

    float salario_atual, novo_salario;
    float aumento, bonus = 0.25;

    printf ("Digite o valor do seu sal�rio: ");
    scanf ("%f",&salario_atual);

    aumento = salario_atual * bonus;
    novo_salario = aumento + salario_atual;

    printf ("Valor do seu sal�rio atual: R$ %.2f\n",salario_atual);
    printf ("Valor do aumento: R$ %.2f\n", aumento);
    printf ("Valor do seu novo sal�rio: R$ %.2f\n", novo_salario);

    return 0;
}
