/*Dada uma matriz 5x5, elabore um algoritmo que imprima:
--> A diagonal principal
--> A diagonal secundária
--> A soma da linha 4
--> A soma da coluna 2
--> Tudo, exceto a diagonal principal*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, soma_linha = 0, soma_coluna = 0;
    int arr[5][5] = {{1, 1, 1, 1, 1},
                     {2, 2, 2, 2, 2},
                     {3, 3, 3, 3, 3},
                     {4, 4, 4, 4, 4},
                     {5, 5, 5, 5, 5}};
    // Impressão da matriz
    printf("Matriz: \n");
    for (i = 0; i < 5; i++)
    {
        printf("\t");
        for (j = 0; j < 5; j++)
            printf("[%2d]", arr[i][j]);
        printf("\n");
    }
    // Elementos da diagonal principal
    printf("\nDiagonal principal:\n");
    for (i = 0; i < 5; i++)
    {   
        printf("\t");
        for (j = 0; j < 5; j++)
        {
            if (i == j)
                printf("[%2d]", arr[i][j]);
            else
                printf("[  ]");
        }
        printf("\n");
    }

    // Elementos da diagonal secundária
    printf("\nDiagonal Secundaria: \n");
    for (i = 0; i < 5; i++)
    {   
        printf("\t");
        for (j = 0; j < 5; j++)
        {   
            if (i + j == 4)
                printf("[%2d]", arr[i][j]);
            else
                printf("[  ]");
        }
        printf("\n");

    }
    // Soma da linha 4
    printf("\nLinha 4 da matriz: \n");
    for (i = 0; i < 5; i++)
    {   
        printf("\t");
        for (j = 0; j < 5; j++)
        {   
            if (i == 3)
            {
                printf("[%2d]", arr[i][j]);
                soma_linha += arr[i][j];
            }
            else
                printf("[  ]");
        }
        printf("\n");
    }
    printf("Soma dos elementos: %d\n\n", soma_linha);

    printf("\nColuna 2 da matriz: \n");
    // Soma da coluna 2
    for (i = 0; i < 5; i++)
    {   
        printf("\t");
        for (j = 0; j < 5; j++)
        {   
            if (j == 1)
            {
                printf("[%2d]", arr[i][j]);
                soma_coluna += arr[i][j];
            }
            else
                printf("[  ]");
        }
        printf("\n");
    }
    printf("Soma dos elementos: %d\n", soma_coluna);


    //Tudo, exceto a diagonal principal
    printf("\nMatriz sem a diagonal principal: \n");
    for (i = 0; i < 5; i++)
    {   
        printf("\t");
        for (j = 0; j < 5; j++)
        {
            if (i == j)
                printf("[  ]");
            else
                printf("[%2d]", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
