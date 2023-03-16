/*
Escreva uma função que recebe uma string de caracteres e uma letra e devolve 
um vetor de inteiros contendo as posições (índices no vetor da string onde a letra foi encontrada) 
e um inteiro contendo o tamanho do vetor criado (total de letras iguais encontradas). Utilize o 
retorno de um vetor para retornar os índices e um ponteiro para guardar o tamanho do vetor.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100  // Tamanho máximo da string

/*
Função que faz a busca de letras na string e retorna as posições em que foram encontradas. 
Recebe como parâmetros: 
-> um ponteiro para string, 
-> uma letra, 
-> um ponteiro para os resultados encontrados 
-> um ponteiro para as posições encontradas 
*/ 
int *busca_letra(char *string, char letra, int *result, int *posicoes)
{
    int tam_string = strlen(string);
    for (int i = 0; i < tam_string; i++){
        if(string[i] == letra){
            posicoes[*result] = i+1;
            (*result)++;
        }
    }
    return posicoes;
}
int main()
{   
    // Variáveis 
    char str1[MAX];
    char letra;
    int posicoes[MAX], tamanho = 0;

    // Lendo a string
    printf("Entre com uma string de caracteres: ");
    fgets(str1, MAX, stdin);
    
    // Verificando entrada válida
    if (strlen(str1) > MAX)  
        printf("Tamanho maximo excedido. Tente uma entrada menor.");

    else{
        // Lendo a letra a ser buscada
        printf("Entre com uma letra: ");
        scanf(" %c", &letra);

        // Verificando entrada válida
        if (isalpha(letra) == 0)
            printf("Entrada invalida");

        else{
            // Chamada da função busca_letra
            busca_letra(str1, letra, &tamanho, posicoes);

            // Imprimindo o resultado da busca
            if (tamanho > 0){
                printf("-> Letra '%c' foi encontrada nas posicoes: ", letra); 
                for (int i = 0; i < tamanho; i++)
                    printf("[%d] ", posicoes[i]);
            }
            else
                printf("-> Sem resultados para a letra '%c'", letra);
        }
    }

    return 0;
}