/* Faça uma função para multiplicar duas matrizes. 
-> A função recebe como parâmetro as três matrizes e as dimensões das duas primeiras matrizes 
-> Verifique se as matrizes podem ser multiplicadas, e apresentar uma mensagem de erro caso não seja possível. 
-> O resultado da multiplicação das duas primeiras matrizes deve ser armazenado na terceira matriz. 
-> A função deve retornar falso se não for possível multiplicar as matrizes, e verdadeiro caso contrário.
-> A função não deve ler as matrizes, imprimir o resultado, nem a mensagem de erro. Isto deve ser feito 
na função principal. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100

// Variáveis
int matriz_1[MAX][MAX];
int matriz_2[MAX][MAX];
int matriz_produto[MAX][MAX];
int linha_1, coluna_1;
int linha_2, coluna_2;

/* Função que multiplica duas matrizes. Recebe o tamanho das matrizes e suas respectivas linhas e colunas.
   Retorna true se a multiplicação for possível, senão retorna false */
bool produto_matrizes(int matriz_a[MAX][MAX], int matriz_b[MAX][MAX], 
                      int linha_a, int coluna_a, int linha_b, int coluna_b)
{
    // Verificando se é possível multiplicar as matrizes
    if (coluna_a != linha_b)
        return false;  // Se não for, retorna false
    
    // Se for possível, efetua a multiplicação
    else
        for (int i = 0; i < linha_a; i++)  // Iteração com cada linha da matriz a
        {
            for (int j = 0; j < coluna_b; j++)  // Iteração com cada coluna da matriz b
            {
                for (int k = 0; k < coluna_a; k++)  // Iteracação com cada coluna da matriz a 
                    matriz_produto[i][j] += matriz_a[i][k]*matriz_b[k][j];
            }
        }
    return true;
}

// Programa Principal
int main()
{   
    // Linhas e colunas da Matriz 1
    printf("Matriz 1\n");
    printf("Linhas e Colunas: ");  
    scanf("%d %d", &linha_1, &coluna_1);

    // Leitura da Matriz 1
    for (int i = 0; i < linha_1; i++)
    {
        for (int j = 0; j < coluna_1; j++)
        {
            printf("Digite o elemento [%d] [%d]: ", i+1, j+1);
            scanf("%d", &matriz_1[i][j]);
        }
    }
    // Linhas e colunas da Matriz 2
    printf("Matriz 2\n");
    printf("Linhas e Colunas: ");  
    scanf("%d %d", &linha_2, &coluna_2);

    // Leitura da Matriz 2
    for (int i = 0; i < linha_2; i++)
    {
        for (int j = 0; j < coluna_2; j++)
        {
            printf("Digite o elemento [%d] [%d]: ", i+1, j+1);
            scanf("%d", &matriz_2[i][j]);
        }
    }
    // Impressão da Matriz 1
    printf("Matriz 1\n");
    for (int i = 0; i < linha_1; i++)
    {
        for (int j = 0; j < coluna_1; j++)
            printf("[%2d]", matriz_1[i][j]);
        printf("\n");
    }
    // Impressão da Matriz 2
    printf("Matriz 2\n");
    for (int i = 0; i < linha_2; i++)
    {
        for (int j = 0; j < coluna_2; j++)
            printf("[%2d]", matriz_2[i][j]);
        printf("\n");
    }
    // Chamando a função e verificando as condições
    if (produto_matrizes(matriz_1, matriz_2, linha_1, coluna_1, linha_2, coluna_2) == 1)
    {      
        // Se a função retorna True (1), imprime o resultado da multiplicação na tela
        printf("Produto das matrizes\n");
        for (int i = 0; i < linha_1; i++)
        {
            for (int j = 0; j < coluna_2; j++)
                printf("[%2d]", matriz_produto[i][j]);
            printf("\n");
        }
       
    }
    // Se não for possível realizar a multiplicação, imprime a mensagem de erro
    else 
        printf("Calculo invalido. Matrizes diferentes.");

    return 0;
}