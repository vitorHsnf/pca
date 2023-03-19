/* 
Crie uma função que aloca e lê um vetor de n inteiros. 
Crie outra função que recebe o vetor e retorna o maior e 
o menor valor. O programa principal deve executar as duas 
funções, imprimir os valores retornados pela 2ª função e 
liberar a memória alocada pela 1ª função. 
*/

#include <stdio.h>
#include <stdlib.h>

void le_vetor(int **vet1, int n)
{
    *vet1 = (int*) malloc (n*sizeof(int));

    for (int i = 0; i < n; i++){
        printf("%do valor: ", i+1);
        scanf("%d", &(*vet1)[i]);
    }
}

int* compara_valor(int *vet1, int n, int *vet2)
{
    int maior = vet1[0];
    int menor = vet1[0];

    for (int i = 1; i < n; i++){
        if (vet1[i] > maior)
            maior = vet1[i];
        else if (vet1[i] < menor)
            menor = vet1[i];
    }
    vet2[0] = maior;
    vet2[1] = menor;
    return vet2;
}

int main()
{   
    // Vetor de n inteiros
    int *vet1, n = 0; 

    // Vetor para armazenar, respectivamnte, o maior e o menor valor
    int vet2[1];

    // Lendo a qnt. de valores
    printf("Digite a qnt. de valores: ");
    scanf("%d", &n);
    
    // Verificando a leitura 
    if (n > 1){
        
        le_vetor(&vet1, n);
        compara_valor(vet1, n, vet2);

        printf("Maior valor: %d\n", vet2[0]);
        printf("Menor valor: %d", vet2[1]);

        // Libera a memória alocada
        free(vet1);
    }
    else
        printf("Entrada invalida");

    return 0;
}