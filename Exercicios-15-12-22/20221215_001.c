#include <stdio.h>
#include <stdlib.h>

// Faça um programa que peça dois números
// e imprima a soma

int main()
{
    float valor1, valor2, soma;

    printf("\nPrimeiro valor: ");
    scanf("%f", &valor1);

    printf("Segundo valor: ");
    scanf("%f", &valor2);

    soma = valor1 + valor2;

    printf("Soma: %.1f ", soma);

    return 0;
}
