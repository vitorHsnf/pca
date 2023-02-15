/*Tentando descobrir se um dado era viciado, um dono de cassino o lançou n vezes. 
Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face.*/

#include <stdio.h>
#include <stdlib.h>
#define DADO 6   // Quantidade de faces do dado

int main()
{   
    // Variáveis
    int lados[DADO], face, n, i;

    for (i = 0; i < DADO; i++) 
        lados[i] = 0;  // Contador de ocorrências de cada face
    
    // Lendo quantas vezes o dado foi jogado
    printf("Digite a quantidade de lancamentos: ");
    scanf("%d", &n);

    // Lendo os resultados de cada lançamento 
    for (i = 0; i < n; i++)
    {
        printf("Digite o %do resultado: ", i+1);
        scanf("%d", &face);
        face = face - 1;  // Armazena em que face o dado caiu
        lados[face] = lados[face] + 1;  // Somando as ocorrências 
    }

    // Imprimindo as ocorrências de cada face do dado
    for (i = 0; i < DADO; i++)
    {   
        printf("LADO %3d: ", i + 1);
        if (lados [i] == 1)
            printf("%2d VEZ\n", lados[i]);
        else 
            printf("%2d VEZES\n", lados[i]);
    }
    return 0;
}
