/*Criar uma função para ordenar um vetor em ordem ascendente 
utilizando o algoritmo Selection-Sort. */

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100  // Tamanho máximo do array
int main()
{   

    // Variáveis
    int num[TAMANHO];
    int i, j, n;
    int aux, menor;  

    // Leitura do tamanho da array (n)
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    // Leitura dos elementos da array (num)
    for(i = 0; i < n; i++)
    {
        printf("Digite o %do elemento: ", i+1);
        scanf("%d", &num[i]);
    }

    // Algoritmo de Selection-Sort
    for(i = 0; i < n-1; i++)  
    {   
        menor = i;
        for (j = i + 1; j < n; j++)
        {
            if (num[j] < num[menor])
                menor = j;
        }
        aux = num[i];
        num[i] = num[menor];
        num[menor] = aux;
    }
    // Imprimindo a array ordenada
    for(i = 0; i <= n-1; i++)
        printf(" %d", num[i]);
    return 0;
}