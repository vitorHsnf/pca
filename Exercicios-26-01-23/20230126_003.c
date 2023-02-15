/*Faça um programa que multiplica uma matriz 3 x 3 de inteiros por um escalar k 
e imprima o resultado na tela. O usuário deve fornecer os valores da matriz e de k.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 3  // Ordem da matriz

// Assinatura da função 
void produto_escalar(int a[MAX][MAX], int escalar, int a_produto[MAX][MAX]);

// Programa principal
int main()
{   
    // Declaração de variáveis
    int num[MAX][MAX], num_produto[MAX][MAX];  // Matriz inicial e matriz produto 
    int i, j;  // Linha e coluna 
    int k;  // Escalar


    // Entrada de dados da matriz
    printf("Entre com os valores da matriz:\n");
    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
            printf("Linha %d, coluna %d:", i+1, j+1);
            scanf("%d", &num[i][j]);
        }
        printf("\n");
    }

    // O valor a ser multiplicado
    printf("Entre com o valor escalar: ");
    scanf("%d", &k);

    // Saída de dados 
    printf("Matriz: \n");
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
            printf("[%2d]", num[i][j]);
        printf("\n");
    }
    printf("Produto escalar da matriz: \n");
    produto_escalar(num, k, num_produto);  // Chamada da função

    for(i = 0; i < MAX; i++)  // Imprimindo o produto escalar
    {
        for(j = 0; j < MAX; j++)
            printf("[%2d]", num_produto[i][j]);
        printf("\n");
    }
    return 0;
}

/*Função que multiplica a matriz por um escalar. Recebe como parâmetros o tamanho da matriz, 
um valor a ser multiplicado, e a matriz após a multiplicação escalar*/
void produto_escalar(int a[MAX][MAX], int escalar, int a_produto[MAX][MAX])
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
            a_produto[i][j] = a[i][j]*escalar;
    }   
}