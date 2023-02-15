/*Criar uma função que efetue e apresente o resultado da soma entre duas matrizes.*/

#include <stdio.h>
#include <stdlib.h>


#define MAX 100 // Valor máximo das linhas e colunas da matriz

void soma_matrizes(int a[MAX][MAX], int b[MAX][MAX], int linha_a, int coluna_a, 
                                                     int linha_b, int coluna_b);
// Programa principal
int main()
{   
    // Declarando as matrizes 
    int m1[MAX][MAX];
    int linhas_m1, colunas_m1;
    int m2[MAX][MAX];
    int linhas_m2, colunas_m2;

    // Leitura da Matriz 1 (m1)
    printf("Linhas e colunas da matriz 1:");
    scanf("%d %d", &linhas_m1, &colunas_m1);
    for (int i = 0; i < linhas_m1; i++)
    {
        for (int j = 0; j < colunas_m1; j++)
        {
            printf("Elemento [%d] [%d]: ", i+1, j+1);
            scanf("%d", &m1[i][j]);
        }
    }
    // Leitura da Matriz 2 (m2)
    printf("Linhas e colunas da matriz 2:");
    scanf("%d %d", &linhas_m2, &colunas_m2);
    for (int i = 0; i < linhas_m2; i++)
    {
        for (int j = 0; j < colunas_m2; j++)
        {
            printf("Elemento [%d] [%d]: ", i+1, j+1);
            scanf("%d", &m2[i][j]);
        }
    }
    // Impressão da m1 na tela
    printf("Matriz 1\n");
    for (int i = 0; i < linhas_m1; i++)
    {
        for (int j = 0; j < colunas_m1; j++)
            printf("[%2d]", m1[i][j]);
        printf("\n");
    }

    // Impressão da m2 na tela
    printf("Matriz 2\n");
    for (int i = 0; i < linhas_m2; i++)
    {
        for (int j = 0; j < colunas_m2; j++)
            printf("[%2d]", m2[i][j]);
        printf("\n");
    }
    // Chamada da função
    soma_matrizes(m1, m2, linhas_m1, colunas_m1, linhas_m2, colunas_m2);
    return 0;
}

/* Função que efetua e imprime a soma de duas matrizes. Tem como parâmetro o tamanho das matrizes e suas respectivas linhas e colunas*/
void soma_matrizes(int a[MAX][MAX], int b[MAX][MAX], int linha_a, int coluna_a, 
                                                     int linha_b, int coluna_b)
{
    // Se as matrizes não são de mesma ordem, imprime o erro na tela
    if (linha_a != linha_b || coluna_a != coluna_b)
        printf("Erro na soma. Matrizes de ordem diferente.");
    else{
        printf("Soma entre as matrizes: \n");
        // Efetua a soma
        for (int i = 0; i < linha_a; i++)
        {
            for (int j = 0; j < coluna_a; j++)
                printf("[%2d]", a[i][j] + b[i][j]); 
            printf("\n");
        }
    }
}