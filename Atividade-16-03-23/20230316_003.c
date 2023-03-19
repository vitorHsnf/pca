/* 
Desenvolva um programa que calcule a soma de duas matrizes MxN 
de números reais (double). A implementação deste programa deve 
considerar as dimensões fornecida pelo usuário (Dica: represente 
a matriz através de variáveis do tipo double **, usando alocação dinâmica de memória)
*/
#include <stdio.h>
#include <stdlib.h>

// Funções para ler e imprimir matrizes
void leitura_matriz(double **matriz, int linhas, int colunas);
void imprime_matriz(double **matriz, int linhas, int colunas);

// Principal
int main()
{
    double **matriz1;
    double **matriz2;
    int linhas1, colunas1;
    int linhas2, colunas2;

    // Lendo os tamanhos da matriz 1 e 2
    printf("Qnt. de linhas e colunas da matriz 1: ");
    scanf("%d %d", &linhas1, &colunas1);

    printf("Qnt. de linhas e colunas da matriz 2: ");
    scanf("%d %d", &linhas2, &colunas2);

    // Verificando leitura
    if (linhas1 != linhas2 || colunas1 != colunas2){
        printf("Soma invalida");
        return 1;
    }

    // Alocação de memória para a matriz 1
    matriz1 = (double **) malloc (linhas1 * sizeof(double));
    for (int i = 0; i < linhas1; i++)
        matriz1[i] = (double *) malloc (colunas1 * sizeof(double)); 

    // Alocação de memória para a matriz 2
    matriz2 = (double **) malloc (linhas2 * sizeof(double));
    for (int i = 0; i < linhas2; i++)
        matriz2[i] = (double *) malloc (colunas2 * sizeof(double));
    
    // Lendo os elementos da matriz 1
    printf("Entre com os valores da matriz 1: \n");
    leitura_matriz(matriz1, linhas1, colunas1);

    // Lendo os elementos da matriz 2
    printf("Entre com os valores da matriz 2: \n");
    leitura_matriz(matriz2, linhas2, colunas2);

    // Imprimindo as matrizes
    printf("\n Matriz 1: \n");
    imprime_matriz(matriz1, linhas1, colunas1);
    printf("\n Matriz 2: \n");
    imprime_matriz(matriz2, linhas2, colunas2);

    // Efetuando a soma das matrizes e imprimindo na tela
    printf("\n Soma das duas matrizes: \n");
    for (int i = 0; i < linhas1; i++){
        for (int j = 0; j < colunas1; j++)
            printf("[%2.1lf] ", matriz1[i][j] + matriz2[i][j]);
        printf("\n");
    }

    // Liberando memória alocada
    for (int i = 0; i < linhas1; i++)
        free(matriz1[i]);
    free(matriz1);

    for(int i = 0; i < linhas2; i++)
        free(matriz2[i]);
    free(matriz2);

    return 0;
}

void leitura_matriz(double **matriz, int linhas, int colunas)
{      
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%lf", &matriz[i][j]);
        }
    }
}

void imprime_matriz(double **matriz, int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
            printf("[%2.1lf] ", matriz[i][j]);
        printf("\n");
    }
}