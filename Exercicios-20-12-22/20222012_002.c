// Escreva um algoritmo que lê 50 numeros inteiros e em seguida 
// mostra a soma de todos os ímpares lidos

#include <stdio.h>

int main()
{
    int num, soma=0, i;

    for(i=1; i<=50; ++i){
        printf("Digite o numero: ", i);
        scanf("%i", &num);
        if (num % 2 == 1){
            soma += num;
        }
    }
    printf("A soma dos impares lidos e: %i", soma);
    
    return 0;
}