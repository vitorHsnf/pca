/*Criar um programa que  dada uma sequência de n números a imprima 
na ordem inversa à da leitura. (o comprimento máximo da sequência é 
100 pelo que n tem que ser um número menor que 100) */

#include <stdio.h>
#define VALOR_MAX 100


int main()
{
    int num[VALOR_MAX];
    int n;
    int i;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {  
        printf("Digite o %do valor: ", (i+1));
        scanf("%d", &num[i]);
    }
   
    for(i = n-1; i >= 0; i--)
        printf(" %d ", num[i]);
    return 0;
}
