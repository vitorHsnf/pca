/* Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses vetores. 
Crie uma função para determinar o produto escalar de dois vetores com n elementos.
O produto escalar de dois vetores A=(a1, a2,..,an) e B=(b1, b2, ..., bn) é ∑aibi  onde 1 ≤ i ≤ n */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 3  // Valor máximo de elementos para vetores

// Função que determina o produto escalar
int produto_escalar(int vetor_x[], int vetor_y[], int tamanho)
{
    int i, soma=0;
    for (i = 0; i < tamanho; i++)
    {
        soma = soma + vetor_x[i]*vetor_y[i];
    }
    return soma;
}

// Programa Principal
int main()
{
    int i, n, soma;
    int x[MAX], y[MAX];
    
    // Entrada de dados para os vetores
    printf("Digite a quantidade de elementos dos vetores: ");
    scanf("%d", &n);

    // Leitura para o vetor X
    for (i=0; i < n; i++)
    {
        printf("Digite o %do valor para X: ", i+1);
        scanf("%d", &x[i]);
    }

    // Leitura para o vetor Y
    for (i = 0; i < n; i++)
    {
        printf("Digite o %do valor para Y: ", i+1);
        scanf("%d", &y[i]);
    }

    // Imprimindo o produto escalar
    printf("Produto escalar: %d ", produto_escalar(x, y, n));

    return 0;
}