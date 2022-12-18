#include <stdio.h>
#include <stdlib.h>

// Faça um programa que peça o raio de um círculo, calcule e mostre a área

int main()
{
    float area, pi=3.14, raio;
    
    printf("\nRaio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("Area do circulo: %.2f m2\n", area);

    system("pause");
    return 0;

}