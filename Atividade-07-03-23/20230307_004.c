/* 
Crie um programa que contenha um array de inteiros contendo 8 elementos. 
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e 
imprima o dobro de cada valor lido.
a)Imprimir o endereço das posições contendo valores pares
*/

#include <stdio.h>

int main()
{
    int vet[8];
    int *pvet;

    // Lendo os elementos para o vetor
    for (pvet = vet; pvet < &vet[8]; pvet++)
        scanf("%d", pvet); 

    // Imprimindo o vetor
    printf("Vetor lido: \n"); 
    for (pvet = &vet[0]; pvet < &vet[8]; pvet++)
        printf("[%d] ", *pvet);

    // Imprimindo os endereços das posições contendo valores pares
    printf("\nEndereco dos valores pares: \n");
    for (pvet = &vet[0]; pvet < &vet[8]; pvet++){
        if (*pvet%2 == 0)
            printf("Valor %d, de endereco: [%p]\n", *pvet, pvet);
    }

    // Imprimindo o dobro de cada valor lido 
    printf("\nDobro dos vetores: \n");
    for (pvet = &vet[0]; pvet < &vet[8]; pvet++)
        printf("[%d] ", *pvet*2);

    return 0;
}