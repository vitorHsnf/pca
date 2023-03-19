/* 
Construa um programa que aloque em tempo de execução (dinamicamente) 
uma matriz de ordem m x n (linha por coluna) usando só aritmética de ponteiros. 
Usar o programa para definir a seguinte matriz:
1 2 3
4 5 6
a) Imprima os valores da matriz usando aritmética de ponteiros.
b) Imprima os valores da matriz usando indexes.
c) Liberar a área de memória alocada pela matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int **matriz;  // Matriz como ponteiro para ponteiro
    int linhas = 0, colunas = 0;

    // Lendo o tamanho da matriz 
    printf("Qnt. de linhas: ");
    scanf("%d", &linhas);

    printf("Qnt. de colunas: ");
    scanf("%d", &colunas);

    // Alocação da matriz
    matriz = (int **) malloc (linhas*sizeof(int));
    for (int i = 0; i < linhas; i++)
        matriz[i] = (int *) malloc (colunas*sizeof(int));
    
    // Lendo cada elemento da matriz
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("Entre com o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimindo a matriz com aritmética de ponteiros
    printf("\nMatriz, usando ponteiros: \n");
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
            printf("[%2d] ", *((*(matriz + i)) + j));
        printf("\n"); 
    }

    // Imprimindo a matriz com index
    printf("\nMatriz, usando index: \n");
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
            printf("[%2d] ", matriz[i][j]);
        printf("\n");
    }

    // Liberando a memória alocada da matriz
    for (int i = 0; i < linhas; i++)
        free(matriz[i]);
    free(matriz);

    return 0;
}