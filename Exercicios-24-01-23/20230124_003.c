/* Criar e utilizar num programa uma função que receba uma sequência
de n números e retorne outra sequencia, mas na ordem inversa. (o comprimento
máximo da sequência é 100 pelo que n tem que ser um número menor que 100) */

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100  // Tamanho máximo do vetor

// Assinatura da função
int sequenciaInversa(int numero, int tamanho); 

// Programa Principal
int main()  
{   
    // Variáveis
    int v[TAMANHO];
    int num;
    int i;

    // Entrada da sequência de n numeros
    printf("Quantidade de numeros: ");
    scanf("%d", &num);
    
    // Leitura da sequência com a estrutura for
    for(i = 0; i < num; i++){

        printf("Digite o %d numero:", i+1); // Lendo o número da sequência
        scanf("%d", &v[i]);  // Armazenando o número no vetor v

    }

    // Imprimindo a sequência inversa e a chamada da função
    printf("Sequencia inversa:");
    for (i = num-1; i >= 0; i--)
        printf(" %d", sequenciaInversa(v[i], num));

    return 0;
}

// Função que recebe o numero do vetor e o seu tamanho,
// e retorna o valor correspondente ao vetor
int sequenciaInversa(int numero_vetor, int tamanho)
{
    int j=0;
    int s[tamanho];
    
    s[j] = numero_vetor;

    return s[j];
}

