/* Faça um programa que leia três valores inteiros e chame uma função que 
receba estes 3 valores de entrada e retorne eles ordenados, ou seja, 
o menor valor na primeira variável, o segundo menor valor na variável do meio, 
e o maior valor na última variável. A função deve retornar o valor 1 se os três 
valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela. */

#include <stdio.h>

int ordena_valor(int *n1, int *n2, int *n3)
{
    int aux; // Variável auxiliar

    // Se os valores forem iguais
    if (*n1 == *n2 && *n1 == *n3 && *n2 == *n3)
        return 1;
    
    // Condições para fazer as ordenações
    if (*n1 > *n2){
        // Troca o conteúdo dos ponteiros *n1 e *n2
        aux = *n1;
        *n1 = *n2;
        *n2 = aux;
    }

    else if (*n1 > *n3){
        // Troca o conteúdo dos ponteiros *n1 e *n3
        aux = *n1;
        *n1 = *n3;
        *n3 = aux;
    }

    else if (*n2 > *n3)
    {   
        // Troca o conteúdo dos ponteiros *n2 e *n3
        aux = *n2;
        *n2 = *n3;
        *n3 = aux;
    }
    return 0;
}

int main()
{   
    int a, b, c;
    int res;
    printf("Entre com 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);

    // Checando se os valores são iguais
    res = ordena_valor(&a, &b, &c);
    if (res == 1)
        printf("Os valores sao iguais");
    
    // Se os valores forem diferentes, faz a ordenação
    else
    {   
        // Estrutura while para chamar a função até que as variáveis estejam ordenadas
        while(a > b || b > c || a > c){
            ordena_valor(&a, &b, &c);
        }

        // Imprimindo as variáveis
        printf("Valor ordenado: %d %d %d", a, b, c);
    }

    return 0;
}