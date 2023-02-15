/*Leia uma matriz 3 x 3. Leia também um valor X. O programa deverá fazer uma busca 
desse valor na matriz e, ao final escrever a localização (linha e coluna) 
ou uma mensagem de “não encontrado”.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 3  // Ordem da matriz

// Assinatura da função
int busca_elemento(int a[MAX][MAX], int x);

// Programa principal
int main()
{
    // Declaração de variáveis
    int num[MAX][MAX]; 
    int i, j;  
    int X;

    // Entrada de dados da matriz
    printf("Entre com os valores da matriz: \n");
    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {   
            printf("Elemento [%d] [%d]: ", i+1, j+1);
            scanf("%d", &num[i][j]);
        }
    }

    // Imprimindo a matriz 
    printf("Matriz: \n");
    for(i = 0; i < MAX; i++)  
    {
        for(j = 0; j < MAX; j++)
        {
            printf("[%4d]", num[i][j]);
        }
        printf("\n");
    }

    // Busca de elementos
    printf("Entre com o valor para busca: ");
    scanf("%d", &X);
    
    // Chamada da função
    busca_elemento(num, X);
    return 0;
}

/*Função que busca um elemento da matriz e imprime sua posição. 
Recebe a matriz e o elemento a ser encontrado */
int busca_elemento(int a[MAX][MAX], int x)
{
    int i, j; // Linha e coluna da matriz
    int res = 0; // Resultado da busca

    // Verificando em cada posição na matriz
    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {   
            // Se x corresponder ao elemento, imprime na tela a posição e 
            // depois soma 1 aos resultados
            if(x == a[i][j])
            {
                printf("%d encontrado na linha %d, coluna %d\n", x, i+1, j+1);
                res += 1; 
            }
        }
    }
    // Se não houver resultado na busca, imprime a mensagem
    if (res == 0)
        printf("Valor nao encontrado.");
    
    return res;
}