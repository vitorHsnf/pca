/* Criar e utilizar num programa uma função que receba uma sequência de n 
números e mude a sequência para o fatorial de cada uns dos números da sequência 
(o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100). 
Exemplo: sequência inicial {2,5,7}  sequência final {2, 120, 5040}*/

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

void imprimirFatorial(int n[], int tamanho)
{
    int i;
    int num;
    int fat = 0;

    printf("\nSequencia Final: ");
    printf("{");
    for (i = 0; i < tamanho; i++)
    {
        num = n[i];
        
        for (fat = 1; num > 1; num--)
        {
            fat = fat * num;
        }
        
        printf(" %d", fat);
        fat = 0;
    }
    printf("}");
}


int main()
{
    int n[TAMANHO];
    int num;
    int i;
    printf("Quantidade de numeros:");
    scanf("%d", &num);


    for (i=0; i < num; i++)
    {
        printf("Digite o %do numero:", i + 1);
        scanf("%d", &n[i]);
    }
    printf("Sequencia Inicial: ");

    printf("{");
    for (i = 0; i < num; i++)
        printf(" %d", n[i]);
    printf("}");
    imprimirFatorial(n, num);


    return 0;
}
