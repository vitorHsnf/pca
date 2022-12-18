#include <stdio.h>

// Faça um programa que pergunte quanto você ganha por hora
// e o número de horas trabalhadas no mês. 
// Calcule e mostre o total do seu salário no referido mês, 
// sabendo-se que são descontados 11% para o Imposto de Renda, 
// 8% para o INSS e 5% para o sindicato.
// Faça um programa que nos dê:
// -> Salário bruto
// -> Quanto pagou ao INSS
// -> Quanto pagou ao sindicato
// -> O Salário Líquido (Salário Líquido = Salário Bruto - Descontos)

int main()
{
    float descontos, ganhos, horas_trabalho, salario_bruto,
    inss, imposto_renda, sindicato;

    printf("\nQuanto ganha por hora? ");
    scanf("%f", &ganhos);

    printf("Horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalho);

    salario_bruto = ganhos*horas_trabalho;
    imposto_renda = (salario_bruto*11)/100;
    inss = (salario_bruto*8)/100;
    sindicato = (salario_bruto*5)/100;
    descontos = imposto_renda + inss + sindicato;

    printf("\nSalario Bruto: R$ %.2f\n", salario_bruto);
    printf("\nImposto de renda: R$ %.2f\n", imposto_renda);
    printf("INSS: R$ %.2f\n", inss);
    printf("Sindicato: R$ %.2f\n", sindicato);
    printf("\nSalario Liquido: R$ %.2f", salario_bruto - descontos);

    return 0;

}