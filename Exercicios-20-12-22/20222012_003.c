// Altere o algoritmo 002 para que ele considere apenas a soma
// dos ímpares que estejam entre 100 e 200

#include <stdio.h>

int main()
{
    int num, soma=0, i;

    for(i=1; i<=50; ++i){
        printf("Digite o numero: ", i);
        scanf("%i", &num);
        if (num % 2 == 1)
            if (num>100 && num<200){
                soma += num;
            }
    }
    printf("A soma dos impares lidos e: %i", soma);
    
    return 0;
}