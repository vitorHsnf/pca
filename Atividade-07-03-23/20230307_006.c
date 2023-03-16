/*
Crie uma função para somar dois arrays. Esta função deve receber dois arrays 
e retornar a soma em um terceiro array. Caso o tamanho do primeiro e segundo array 
seja diferente então a função retornará ZERO (0). Caso a função seja concluída com 
sucesso a mesma deve retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do array.
*/ 

#include <stdio.h>
#define MAX 100

int soma_array(int *a, int *b, int *soma, int tamanho_a, int tamanho_b)
{
    if (tamanho_a != tamanho_b)
        return 0;

    for (int i = 0; i < tamanho_a; i++)
        *(soma + i) = *(a+i) + *(b+i);

    return 1;
}


int main()
{
    int arr1[MAX], tamanho_a1;
    int arr2[MAX], tamanho_a2;
    int soma[MAX];
    int res;

    // Lendo a primeira array
    printf("Entre com o tamanho da array 1: ");
    scanf("%d", &tamanho_a1);
    for (int i = 0; i < tamanho_a1; i++){
        printf("Elemento [%d]: ", i+1);
        scanf("%d", &arr1[i]);
    }

    // Lendo a segunda array
    printf("Entre com o tamanho da array 2: ");
    scanf("%d", &tamanho_a2);
    for (int i = 0; i < tamanho_a2; i++){
        printf("Elemento [%d]: ", i+1);
        scanf("%d", &arr2[i]);
    }

    // Armazenando o retorno da função soma_array
    res = soma_array(arr1, arr2, soma, tamanho_a1, tamanho_a2);

    // Se o retorno for 1, imprime a mensagem na tela
    if (res == 1){
        printf("Resultado da soma: ");
        for (int i = 0; i < tamanho_a1; i++)
            printf("[%d] ", soma[i]);
    }
    else
        printf("Arrays com tamanho diferente");

    return 0;
}

