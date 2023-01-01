// Escreva um programa em C que lê 15 valores reais, encontra
// o maior e o menor deles e mostra o resultado.

#include <stdio.h>

int main()
{
    int cont;
    float num, maior, menor;
    
    printf("Digite o 1o valor: \n");
    scanf("%f", &num);
    maior = num;
    menor = num;

    for(cont=1; cont < 15;  cont++){
        printf("Digite o %do valor: \n", cont+1);
        scanf("%f", &num);
        if (num > maior) {
            maior = num;
        } 
        else if (num < menor){
            menor = num;
        }
    }
    printf("Maior valor: %.2f \n", maior);
    printf("Menor valor: %.2f \n", menor);
    return 0;
}
