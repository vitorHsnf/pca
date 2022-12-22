// Construa um algoritmo que leia um conjunto de 20 numeros inteiros
// e mostre qual foi o maior e menor valor fornecido

#include <stdio.h>

int main()
{
    int num, maior, menor, i;

    printf("O 1o numero inteiro:");
    scanf("%i", &num);

    maior = num;
    menor = num;

    for(i=1; i<20; ++i){
        printf("\nO %do numero inteiro:", i+1);
        scanf("%i", &num);

        if (num>maior){
            maior = num;
        }else{
            if (num<menor)
            {
                menor = num;
            }
        }
    }
    printf("\nO maior valor fornecido foi:  %i", maior);
    printf("\nO menor valor fornecido foi: %i", menor);

    return 0;

}