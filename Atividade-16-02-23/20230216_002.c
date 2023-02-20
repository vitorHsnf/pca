/*
Um conjunto pode ser representado por um vetor da seguinte forma:
V[0] é o tamanho do conjunto; V[1], V[2], etc. são os elementos do conjunto (sem repetições).

(a) Faça uma função chamada intersecção que dados dois conjuntos de números inteiros A e B, 
constrói um terceiro conjunto C que é a intersecção de A e B. Lembre-se de que em C[0] a sua função 
deve colocar o tamanho da intersecção.

(b) Faça um programa que lê um inteiro n > 1 e uma sequência de n conjuntos de números inteiros 
(cada um com no máximo 100 elementos) e constrói e imprime um vetor INTER que representa a intersecção 
dos n conjuntos. 
*/
#include <stdio.h>
#define MAX 100  // Tamanho máximo dos elementos de um conjunto

// Variáveis Globais
int A[MAX];  // Conjunto inicial
int B[MAX]; // Conjuntos subsequentes
int C[MAX]; // Conjunto Intersecção

// (a) Função que recebe dois vetores, e faz a intersecção de seus elementos
void interseccao(int c1[MAX], int c2[MAX])
{
    int contador = 0;  // Conta os elementos da intersecção

    // Verificando cada elemento dos conjuntos
    for(int i = 1; i <= c1[0]; i++)
    {
        for (int j = 1; j <= c2[0]; j++)
        {
            if (c1[i] == c2[j])
            {  
                contador++; // Acrescenta um a cada intersecção
                C[contador] = c1[i]; // Armazena a intersecção no vetor C 
            } 
        }
    }
    C[0] = contador; // O índice 0 do vetor C recebe o tamanho da conjunto
}

// (b) Programa Principal
int main()
{   
    int n; // Sequência de n conjuntos

    // Lendo a qnt de conjuntos
    printf("Digite a qnt. de conjuntos para interseccao: ");
    scanf("%d", &n);

     // Validando entrada da sequência
    if (n <= 1) 
    {
        while (n <= 1)
        {
            printf("Entrada invalida.\n");
            printf("Digite a qnt. de conjuntos para interseccao: ");
            scanf("%d", &n);
        }
    }

    // Lendo a qnt. de elementos do primeiro conjunto
    printf("Digite a qnt. de elementos do 1o conjunto: ");
    scanf("%d", &A[0]);  // Armazena o tamanho no índice 0 do vetor A

    // Validando entrada da qnt. total de elementos
    if (A[0] > MAX)
    {
        while (A[0] > MAX)
        {
            printf("Erro. A entrada suporta ate %d elementos\n", MAX);
            printf("Digite a qnt. de elementos do 1o conjunto: ");
            scanf("%d", &A[0]);
        }
    }

    // Lendo cada elemento do primeiro conjunto no vetor A
    for (int i = 1; i <= A[0]; i++)
    {
        printf("Digite o elemento %d:", i);
        scanf("%d", &A[i]);
    }

    // Lendo os conjuntos seguintes
    for (int i = 1; i < n; i++)
    {   
        // Lendo a qnt. de elementos no índice 0 do vetor B
        printf("Digite a qnt. de elementos do %do conjunto: ", i+1);
        scanf("%d", &B[0]);

        // Validando entrada da qnt. de elementos
        if (B[0] > MAX)
        {
            while (B[0] > MAX)
            {
                printf("Erro. A entrada suporta ate %d elementos\n", MAX);
                printf("Digite a qnt. de elementos do 1o conjunto: ");
                scanf("%d", &B[0]);
            }
        }
    }   
        int temp[MAX]; // Inicializando um vetor temporário para armazenar os demais conjuntos

        // Lendo os elementos dos conjuntos no vetor B, e depois no vetor 'temp'
        for (int i = 1; i <= B[0]; i++)
        {
            printf("Digite o elemento %d: ", i);
            scanf("%d", &B[i]);
            temp[i] = B[i];
        }
        temp[0] = B[0]; // Lendo o tamanho do vetor B no indíce 0 do vetor 'temp'
        interseccao(A, temp); // Fazendo a intersecção entre os conjuntos A e 'temp'

    // Imprimindo a intersecção na tela com o vetor C
    printf("\nConjunto Interseccao: \n");
    printf("{");
    for (int i = 1; i <= C[0]; i++)
        printf("[%d]", C[i]);
    printf("}");

    return 0;
}