// Faça um programa que leia vários inteiros positivos e mostre,
// no final, a soma dos números pares e a soma dos números ímpares. O
// programa para quando entrar um número maior que 1000.

#include <stdio.h>


int main()
{
    int num, soma_par = 0, soma_impar = 0;

    printf("Digite um numero inteiro (Numero maior que 1000 para finalizar): \n");
    scanf("%i", &num);

    if (num < 0) {
        printf("Numero invalido, apenas valores positivos");    
    } else {
        while (num < 1000){

            if (num < 0){
                printf("Numero invalido. Apenas valores positivos.\n");
                printf("\nDigite um numero inteiro (Numero maior que 1000 para finalizar): \n");
                scanf("%i", &num);
                
            } else {
                if (num%2 == 0){
                    soma_par = soma_par + num;
                } 
                else if (num % 2 == 1){
                    soma_impar = soma_impar + num;
                }
                printf("Digite um numero inteiro (Numero maior que 1000 para finalizar): \n");
                scanf("%i", &num);
            }
        } 
        printf("\nSoma dos pares: %i", soma_par);
        printf("\nSoma dos impares: %i", soma_impar);

    }
    
    return 0;

}