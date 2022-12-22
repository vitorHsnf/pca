// Faça um programa que leia do teclado cinco números
// e imprima na tela a soma destes cinco numeros.
// O programa só pode usar 2 variáveis

#include <stdio.h>

int main()
{
    float num, soma=0;

    printf("Soma de numeros:\n");
    do
    {
        printf("\nDigite um numero (0 para finalizar): ");
        scanf("%f", &num);
        soma += num;
    } 
    while (num != 0);

    printf("\nSoma: %.1f", soma);
    
    return 0;
}