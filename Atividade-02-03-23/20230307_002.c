/* 
Escreva uma função que encontra um valor em um vetor de inteiros e retorna um ponteiro para o
primeiro endereço onde este valor foi encontrado ou NULL caso o valor não esteja no vetor;
- A função recebe como parâmetro dois ponteiros para inteiros (os endereços inicial e final) 
  e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada. 
  Na função main deve ser declarado um vetor de tamanho 10, com três ocorrências do valor 2;
- A main() deve utilizar a função criada para encontrar e imprimir os endereços de memória 
  de todas as ocorrências do valor 2, em um laço, até que todo o vetor tenha sido pesquisado.
- Defina a constante NULL se necessário.
*/

#include <stdio.h>
#define NULL 0

int *pesquisa_valor(int *p_inicial, int *p_final, int n)
{   
    int *posicao = p_inicial;
    while (posicao <= p_final)
    {
        if (*posicao == n)
            return posicao;
        posicao++;
    }

    return NULL;
}
int main()
{   
    int vet[10] = {2, 1, 3, 2, 3, 2, 7, 4, 9, 7};  
    int valor;  // Valor a ser encontrado
    int *enderecos[10] = {NULL};  // Armazenar os endereços do valor a ser encontrado
    int index_valor = NULL;  // Indica a posição do vetor 
    int *p_valor;  // Ponteiro para o valor

    // Lendo o valor
    printf("Digite o valor a ser encontrado: ");
    scanf("%d", &valor);

    // Percorrendo os elementos e buscando ocorrências
    for (int i = 0; i < 10; i++)
    { 
      p_valor = pesquisa_valor(&vet[i], &vet[9], valor);

      // Verifica se um valor foi encontrado
      if (p_valor != NULL){ 
        int encontrado = 0;  // Indica se o endereço do valor já foi encontrado
        // Iterando pelo vetor auxiliar dos endereços
        for (int j = 0; j < index_valor; j++){  
          if (p_valor == enderecos[j]){  // Verificado se o valor está repetido
            encontrado = 1;  // A variável recebe 1 se encontrar valor repetido
            break;
          }
        }

        // Se o endereço não for repetido, armazena-o no vetor 'enderecos'
        if (encontrado == 0)
          enderecos[index_valor++] = p_valor;
      }
    }

    // Imprimindo os endereços encontrados
    if (index_valor > NULL){
      printf("Valor %d encontrado nos enderecos: ", valor);
      for (int i = 0; i < index_valor; i++)
          printf("%d ", enderecos[i]);
    }
    // Se não houverem endereços armazenados no vetor 'endereços' imprime a mensagem na tela
    else
        printf("\nValor %d nao encontrado!", valor);
    return 0;
}