/* Faça um programa para criar a formação de uma equipe de futebol para um jogo. Os requisitos são:
- A equipe tem 23 jogadores.
- Cada jogador tem uma função (3-Goleiro, 7-Defesa, 8-Médio Campo, 5-Atacante) .
- Cada jogador tem uma avaliação entre 0 e 10
a) Crie usando array as estruturas necessárias para representar essa informação num programa em C.
b) Inicializar as estruturas com os dados de uma equipe.
c) Crie e imprima uma formação  (1-Goleiro, 4-Defesa, 4-Médio Campo, 2-Atacante) 
para o jogo selecionando os jogadores em cada função com melhor avaliação. */

#include <stdio.h>

int main()
{   
    // Matrizes inicializadas com a ID dos jogadores e sua avaliação  
    int goleiros[3][2] = {{3, 9}, {77, 10}, {6, 8}};  
    int defesas[7][2] = {{31, 9}, {35, 7}, {30, 6}, {4, 10}, {44, 8}, {3, 5}, {30, 4}}; 
    int medio_campo[8][2] = {{32, 8}, {8, 10}, {5, 7}, {20, 2}, {7, 6}, {14, 3}, {29, 7}, {42, 6}};  
    int atacantes[5][2] = {{10, 6}, {27, 8}, {9, 9}, {31, 7}, {11, 5}};  
    int aux = 0;  // Verifica a melhor avaliacao
    int aux2 = 0;  // ID do jogador com melhor avaliacao

    // Escalação dos goleiros
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3-1; j++)
        {
            if (goleiros[i][1] < goleiros[i+1][1])
            {   
                aux2 = goleiros[i][0];
                aux = goleiros[i][1];
                goleiros[i][1] = goleiros[i+1][1];
                goleiros[i][0] = goleiros[i+1][0];
                goleiros[i+1][0] = aux2;
                goleiros[i+1][1] = aux;  
            }
        }
    }

    // Escalação da Defesa
    for(int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7 - 1; j++)
        {
            if (defesas[j][1] < defesas[j+1][1])
            {
                    aux = defesas[j][1];
                    aux2 = defesas[j][0];
                    defesas[j][1] = defesas[j+1][1];
                    defesas[j][0] = defesas[j+1][0];
                    defesas[j+1][1] = aux;
                    defesas[j+1][0] = aux2;
            }
        }
    }

    // Escalação do Meio Campo
    for(int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8-1; j++)
        {
            if (medio_campo[j][1] < medio_campo[j+1][1])
            {
                    aux = medio_campo[j][1];
                    aux2 = medio_campo[j][0];
                    medio_campo[j][1] = medio_campo[j+1][1];
                    medio_campo[j][0] = medio_campo[j+1][0];
                    medio_campo[j+1][1] = aux;
                    medio_campo[j+1][0] = aux2;
            }
        }
    }
    // Escalacao dos atacantes
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-1; j++)
        {
            if (atacantes[j][1] < atacantes[j+1][1])
            {
                    aux = atacantes[j][1];
                    aux2 = atacantes[j][0];
                    atacantes[j][1] = atacantes[j+1][1];
                    atacantes[j][0] = atacantes[j+1][0];
                    atacantes[j+1][1] = aux;
                    atacantes[j+1][0] = aux2;
            }
        }
    }

    // Imprimindo a escalação do time
    printf("--- Escalacao --- \n");

    // Goleiro
    printf("Goleiro\n");
    printf("-> ID: [%d] ", goleiros[0][0]);

    // Defesa
    printf("\nDefesas\n");
    for (int i = 0; i < 4; i++)
    {
        printf("-> ID: [%d] ", defesas[i][0]);
        printf("\n");
    }
    // Meio campo
    printf("Meio-Campo\n");
    for (int i = 0; i < 4; i++)
    {
        printf("-> ID: [%d] ", medio_campo[i][0]);
        printf("\n");
    }
    // Atacantes
    printf("Atacantes\n");
    for (int i = 0; i < 2; i++)
    {
        printf("-> ID: [%d] ", atacantes[i][0]);
        printf("\n");
    }
    return 0;
}
