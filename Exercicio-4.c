// Faça um algoritmo que leia o valor de uma conta
// e calcule a porcentagem do garçom

#include <stdio.h>

int main()
{
    float conta, comissao;
    int gorjeta;

    printf("Valor da conta R$");
    scanf("%f", &conta);
    printf("Porcentagem do garcom: ");
    scanf("%d", &gorjeta);

    comissao = (conta*gorjeta)/100;

    printf("\n Comissao do garcom: R$ %.2f\n", comissao);
    printf("\n Valor total com a gorjeta: R$ %.2f\n", conta + comissao);

    return (0);

}