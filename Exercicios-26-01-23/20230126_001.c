/* Construa um algoritmo que efetue e apresente o resultado 
da soma entre duas matrizes 3 x 5. Inicialize a matriz com 
valores quaisquer e imprima o resultado na tela. */

#include <stdio.h>
#include <stdlib.h>

// Definindo o número de linhas e colunas da matriz
#define NUM_L 3  
#define NUM_C 5 

int main()
{       
    // Declarando as matrizes "matriz_1" e "matriz_2"
    int matriz_1[NUM_L][NUM_C] = {{3, 4, 7, 6, 5},
                                  {2, 3, 1, 0, 6},
                                  {3, 3, 9, 3, 4}};

    int matriz_2[NUM_L][NUM_C] = {{5, 7, 8, 0, 2},
                                  {4, 5, 1, 9, 10},
                                  {3, 2, 0, 1, 2}};
    
    // Array que armazena a soma entre as matrizes
    int matriz_soma[NUM_L][NUM_C];  

    // Variáveis para trabalhar com as matrizes
    int i, j;

    // Imprimindo a matriz 1 na tela
    printf("\nMatriz 1: \n");
    for (i = 0; i < NUM_L; i++)
    {
        for (j = 0; j < NUM_C; j++)
            printf("[%2d]", matriz_1[i][j]);
        printf("\n");
    }

    // Imprimindo a matriz 2 na tela
    printf("\nMatriz 2: \n");
    for (i = 0; i < NUM_L; i++)
    {
        for (j = 0; j < NUM_C; j++)
            printf("[%2d]", matriz_2[i][j]);
        printf("\n");
    }

    // Efetuando e imprimindo na tela a soma das matrizes 
    printf("\nSoma: \n");
    for (i = 0; i < NUM_L; i++) 
    {
        for (j = 0; j < NUM_C; j++)  
        {   
            // Somando o elemento com seu correspondente, depois armazenando na "matriz_soma"
            matriz_soma[i][j] = matriz_1[i][j] + matriz_2[i][j];

            // Imprimindo na tela os resultados
            printf("[%2d]", matriz_soma[i][j]);
        }
        printf("\n");
    }
    return 0;
}