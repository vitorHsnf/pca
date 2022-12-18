#include <stdio.h>

// Faça um programa que pergunte quanto você ganha por hora
// e o número de horas trabalhadas no mês. Calcule e mostre
// o total do seu salário no referido mês.

int main()
{
    float ganhos, horas_trabalho, salario;
    printf("\nQuanto ganha por hora? R$");
    scanf("%f", &ganhos);

    printf("\nNumero de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalho);

    salario = ganhos*horas_trabalho;

    printf("\nTotal do seu salario: R$ %.2f", salario);

    return 0;

}
