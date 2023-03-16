/*
Escreva uma função chamada 'troca', que troca os valores dos parâmetros recebidos.
Sua assinatura deve ser: void troca(float *a, float *b)
*/

#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b)
{
    float aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    float a = 0;
    float b = 0;

    // Lendo os dois valores
    printf("Entre com o primeiro valor: ");
    scanf("%f", &a);

    printf("Entre com o segundo valor: ");
    scanf("%f", &b);

    // Imprimindo os valores lidos
    printf("Valores iniciais: a = %.1f  b = %.1f\n", a, b);

    // Chamada da função e imprimindo a troca entre os valores
    troca(&a, &b);
    printf("Trocando os valores: a = %.1f  b = %.1f\n", a, b);

    return 0;
}

