#include <stdio.h>

// Faça um programa que converta metros para centímetros

int main()
{
    float m, convert;

    printf("\nConversor de metros para centimetros");

    printf("\nDigite o valor em metros(m): ");
    scanf("%f", &m);

    convert = m*100;

    printf("  %.2fm --> %.2fcm\n", m, convert);

    return 0;

}