/*Criar e utilizar num programa uma função que receba uma sequência de 
n números e a imprima na ordem inversa. (o comprimento máximo da sequência é 
100 pelo que n tem que ser um número menor que 100)*/

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100  // Tamanho máximo de vetor

// Assinatura da função
void imprimirInversa(int v[], int tamanho);

// Programa Principal
int main()
{   
    // Variáveis
    int v[TAMANHO];
    int num;
    int i;

    // Entrada da sequência
    printf("Quantidade de numeros: ");
    scanf("%d", &num);
   
    // Lendo os numeros da sequencia "num" e armazenando no vetor v
    for(i = 0; i < num; i++){
        printf("Digite o %do numero:", i+1);
        scanf("%d", &v[i]);
    }
    imprimirInversa(v, num);  // Chamada da função
    return 0;
}

/* Função que recebe uma sequência de números e o seu tamanho, 
depois a imprime na ordem inversa*/
void imprimirInversa(int v[], int tamanho)
{
    int i;
    for (i = tamanho-1; i >= 0; i--)
        printf(" %d", v[i]);
}

