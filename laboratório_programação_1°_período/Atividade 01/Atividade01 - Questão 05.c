#include <stdio.h>
#include <locale.h>

/*
05.  Fa�a um programa que receba o sal�rio de um funcion�rio e o percentual de aumento,
 calcule e mostre o valor do aumento e do novo sal�rio.
*/
int main () {
    setlocale (LC_ALL,"Portuguese");

    float salario_atual, novo_salario;
    float percentual_aumento, aumento;

    printf ("Digite o valor do seu sal�rio: ");
    scanf ("%f",&salario_atual);

    printf ("Digite o percentual de aumento: ");
    scanf ("%f",&percentual_aumento);

    aumento = salario_atual * (percentual_aumento / 100);
    novo_salario = aumento + salario_atual;

    printf ("Valor do seu sal�rio atual: R$ %.2f\n",salario_atual);
    printf ("Valor do aumento: R$ %.2f\n", aumento);
    printf ("Valor do seu novo sal�rio: R$ %.2f\n", novo_salario);

    return 0;
}

