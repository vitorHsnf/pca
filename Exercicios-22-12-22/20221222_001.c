// Fazer um programa para calcular a raiz quadrada 
// de um número positivo, baseado no método de 
// aproximações sucessivas de Newton-Raphson.
//
// Seja Y o número para o qual se quer computar
// a raiz quadrada.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int y, e = 0.1;
    float x1, x2, raiz;

    printf("Digite o numero positivo: ");
    scanf("%i", &y);

    // Raiz com a função sqrt()
    raiz = sqrt(y);

    // Raiz com o método Newton-Raphson
    x1 = y / 2;
    x2 = x1 - ((x1*x1) - y)/(2*x1);

    while (fabs(x2-x1) > e){
        x1 = x2;
        x2 = x1 - ((x1*x1) - y)/(2*x1);
    }

    printf("\nRaiz: %.2f", raiz);

    printf("\nRaiz do Metodo Newton-Raphson: %.2f", x2);

    return 0;

}