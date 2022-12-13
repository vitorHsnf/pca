// Ler o salário de uma pessoa e calcular o novo salário
// considerando que esta pessoa terá um reajuste de 10%

#include <stdio.h>

int main()
{
    float salario, novo_salario, valor_aumento;

    printf("Salario atual: R$ ");
    scanf("%f", &salario);

    valor_aumento = salario*0.10;
    
    printf("\n Valor do aumento: R$ %.2f\n", valor_aumento);
    printf("\n Novo salario: R$ %.2f\n", valor_aumento + salario);

    return(0);

}