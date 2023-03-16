/*Escreva uma função que receba um vetor inteiro v[0..n-1] 
e os endereços de duas variáveis inteiras, digamos min e max, 
e deposite nessas variáveis o valor do elemento mínimo e o valor 
do elemento máximo do vetor. Escreva também uma função main que use a função.*/

#include <stdio.h>
#define MAX 100
void deposita_valor(int vet[], int tamanho, int *a, int *b)
{   
    int maior = 0;
    int menor = 0;
    for (int i = 1; i < tamanho; i++)
    {
        if (vet[i] > vet[maior])
            maior = i;
        else if (vet[i] < vet[menor])
            menor = i;
    }
    *a = vet[menor];
    *b = vet[maior];
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    int tamanho_vet = 0;
    int vet[MAX];

    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &tamanho_vet);

    if (tamanho_vet < 0)
        printf("Entrada invalida!");
    else if (tamanho_vet > MAX)
        printf("O tamanho maximo do vetor eh de 100 elementos!");

    else {
    for (int i = 0; i < tamanho_vet; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    deposita_valor(vet, tamanho_vet, &num1, &num2);
    printf("-> Elemento minimo: %d\n", num1);
    printf("-> Elemento maximo: %d", num2);
    }
    return 0;
}