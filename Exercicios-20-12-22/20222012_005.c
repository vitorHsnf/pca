// Altere o programa 004 para que ele não permita
// a entrada de valores negativos

#include <stdio.h>

int main()
{
    int num, maior, menor, i=1;

    printf("O 1o numero inteiro: ");
    scanf("%i", &num);

    if(num<0){
        printf("\nValor invalido. Apenas numeros positivos.\n");
    }
    else
        {
            maior = num;
            menor = num;

            while(i<20)
            {
                printf("\nO %do numero inteiro: ", i+1);
                scanf("%i", &num);

                if (num < 0)
                {
                    printf("\nValor invalido. Apenas numeros positivos.\n");
                    continue;
                }
                if (num>maior)
                {
                    maior = num;
                }
                else
                {
                    if (num<menor)
                    {
                        menor = num;
                    }
                }
                ++i;
            }
            printf("\nO maior valor fornecido foi: %i", maior);
            printf("\nO menor valor fornecido foi: %i", menor);
        }
    return 0;
}
