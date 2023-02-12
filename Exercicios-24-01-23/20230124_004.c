/*Criar e utilizar num programa uma função que receba 
uma sequência de n números e retorne outra sequência só 
com os números par (o comprimento máximo da sequência é 100 
pelo que n tem que ser um número menor que 100)*/

# include <stdio.h>
# include <stdlib.h>
# define TAMANHO 100

void imprimirPares(int n[], int tamanho)
{
    int i = 0;
    for (i = 0; i < tamanho; i++){
        if (n[i] % 2 == 0)
            printf(" %d", n[i]);
    }
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
        printf("Digite o %d numero:", i + 1);
        scanf("%d", &n[i]);
    }
    imprimirPares(n, num);


    return 0;
}
