// Dado um número p, determine os ímpares consecutivos
// cuja soma é igual a n3 para n assumindo valores de 1 a p

#include <stdio.h>

int main()
{
    int p, n, inicio, cont;

    printf("Digite o numero de testes: ");
    scanf("%d", &p);

    for(n = 1; n <= p; n++)
    {
        inicio = n * (n-1) + 1;
        printf("\n%d*%d*%d = %d", n, n, n, inicio);

        for(cont = 1; cont < n; cont++)
        {
            inicio = inicio + 2;
            printf(" + %d", inicio);
        }
        inicio = 0;
    }
    printf("\n");     
    return 0;
}