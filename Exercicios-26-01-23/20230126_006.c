/*Dizemos que uma matriz quadrada inteira é um quadrado mágico (1) se 
a soma dos elementos de cada linha, a soma dos elementos de cada coluna e 
a soma dos elementos das diagonais principal e secundária são todas iguais.

Dada uma matriz quadrada Anxn , verificar se A é um quadrado mágico.*/

#include <stdio.h>
#define MAX 100  // Valor máximo do tamanho da matriz

int arr[MAX][MAX];
int n;


// Função que verifica se uma matriz é um quadrado mágico. Retorna 0 (False) ou 1 (True).
int ehQuadradoMagico()
{
    int soma1 = 0, soma2;
    int res = 0; 

    // Encontrando a soma da primeira linha, que vai ser usada na verificação
    for (int i = 0; i < n; i++)
        soma1 += arr[0][i];
    
    // Verificando a soma das linhas subsequentes
    for (int i = 1; i < n; i++)
    {
        soma2 = 0;
        for (int j = 0; j < n; j++)
            soma2 += arr[i][j];

        if (soma2 != soma1)
            return res;
    }
    // Verificando a soma de cada coluna 
    for (int i = 0; i < n; i++)
    {   
        soma2 = 0;
        for (int j = 0; j < n; j++)
            soma2 += arr[j][i];

        if (soma2 != soma1)
            return res;
    }
    // Verificando a soma da diagonal principal 
    soma2 = 0;
    for (int i = 0; i < n; i++)
        soma2 += arr[i][i];

    if (soma2 != soma1)
        return res;

    // Verificando a soma da diagonal secundária
    soma2 = 0;
    for (int i = 0; i < n; i++)
        soma2 += arr[i][(n-i)-1];

    if (soma2 != soma1)
        return res;
    
    // Se passar por todas as verificações, a condição é verdadeira
    return res = 1;
}

// Programa Principal
int main()
{   
    // Lendo o tamanho da matriz
    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);

    // Lendo os elementos da matriz
    printf("Digite os elementos: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            printf("Linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    // Impressão da matriz
    printf("\nMatriz\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("[%d]", arr[i][j]);
        printf("\n");
    }
    // Verificando a condição de ser quadrado mágico com a função
    if (ehQuadradoMagico() == 1)
        printf("\nEh um quadrado magico.");
    else
        printf("\nNao eh quadrado magico.");    
}