// Faça um programa para imprimir a tabuada de 1 a 9 
// utilizando laços de repetição

#include <stdio.h>

int main()
{
    int m1, m2, produto;

    for(m1=1; m1<=9; m1++)
    {
        for(m2=1; m2<=10; m2++)
        {
            produto = m1 * m2;
            printf("%d x %d = %d\n", m1, m2, produto);
        }
        printf("\n");
    }

    return 0;
}