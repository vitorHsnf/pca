#include <stdio.h>

// Faça um programa que peça 2 números inteiros e um número real.
// Calcule e mostre:
// -> O produto do dobro do primeiro com metade do segundo
// -> A soma do triplo do primeiro com o terceiro
// -> O terceiro elevado ao cubo

int main()
{
    int n1, n2;
    float n3, cubo, produto, soma;


    printf("Digite um numero inteiro: ");
    scanf("%i", &n1);
    printf("Digite outro numero inteiro: ");
    scanf("%i", &n2);

    printf("Digite um numero real: ");
    scanf("%f", &n3);

    produto = (2*n1) * (n2/2);
    soma = (3*n1) + n3;
    cubo = n3 * n3 * n3;

    printf("%.1f\n", produto);
    printf("%.1f\n", soma);
    printf("%.1f\n", cubo);

    return 0;
}
