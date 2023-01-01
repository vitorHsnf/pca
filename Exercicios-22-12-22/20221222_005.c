// Faça um programa em C que calcula e escreve a seguinte
// soma: soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50

#include <stdio.h>

int main()
{
    float soma, n=1, m=1;

    printf("Soma: ");

    while (m < 50){
        soma = n/m;
        n = n + 2;
        m++;
        if (m == 50){
            printf("%.0f/%.0f", n, m);
        } else {
            printf("%.0f/%.0f + ", n, m);
        }
    }
    printf(" = %.1f", soma);
    return 0;
}