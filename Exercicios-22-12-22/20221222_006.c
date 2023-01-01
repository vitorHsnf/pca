// Dado um número n inteiro e positivo, dizemos que n é perfeito
// se n for igual à soma de seus divisores positivos diferentes de n. 
// Construa um programa em C que verifique se um dado número é perfeito.
// Ex: 6 é perfeito, pois 1+2+3 = 6.

#include <stdio.h>

int main()
{   
    // Declaração de variáveis
    int i = 1, num = 0, soma = 0;

    // Validação da entrada. Apenas valores positivos.
    while(num < 1)
    {
        printf("Digite um numero: \n");
        scanf("%d", &num);
        if(num > 1)
            break;
        printf("Numero invalido. Apenas inteiros e positivos.\n\n");
    }
    // Loop para calcular a soma dos divisores 
    for(i=1; i < num; i++)
    {
        if (num % i == 0)
            soma = soma + i;
    }
    
    // Se a entrada for um numero perfeito
    if (soma == num)
    {
        printf("\n%d eh perfeito, pois ", num);
        soma = 0;
        // Imprimindo na tela conforme o ex: 1+2+3 = 6
        for(i=1; i < num; i++)
        {
            if (num % i == 0)
            {
                printf("%d", i);
                soma = soma + i;
                if (soma < num)
                    printf("+");
            } 
            else if (soma == num)
            {
                printf(" = %d", soma);
                break;
            }
        }
    } 
    // Se a entrada não for um numero perfeito
    else 
        printf("\n%d nao eh um numero perfeito.", num);

    return 0;
}