/* Um número perfeito é um número inteiro para o qual a soma de todos 
   os seus divisores positivos próprios (excluindo-o) é igual ao próprio número. 
     Por exemplo, o número 6 é um número perfeito, pois: 6 = 1 + 2 + 3. 
     O próximo número perfeito é o 28, pois: 28 = 1 + 2 + 4 + 7 + 14.
   Escreva um programa em C com as seguintes funções:
   - Função para ler um número inteiro e verifique se ele é par, caso seja impar 
   obrigue o usuário a digitar outro número até que um número par seja digitado;
   - Função para verificar se o número digitado é perfeito e imprima uma mensagem 
   na tela indicando se o número digitado é perfeito ou não.*/


#include <stdio.h>

// Verifica se o numero informado no programa é par ou não
int verifica_par(int n){
    while (n % 2 == 1){
        printf("Numero invalido. Somente numeros pares.\n");
        printf("\nDigite um numero inteiro e par: ");
        scanf("%d", &n);
    }
    return n;  // Se o numero verificado for par, retorna ele para o programa

}
void verifica_perfeito(int n){
    int i, soma=0;
    for (i=1; i < n; i++){
        if (n % i == 0){
            soma = soma + i;
        }
    }
    if (soma == n){
        printf("O numero eh perfeito");
    } else {
        printf("O numero nao eh perfeito");
    }

}
int main(){
    int num;

    printf("Digite um numero inteiro e par: ");
    scanf("%d", &num);

    num = verifica_par(num);

    verifica_perfeito(num);

    return 0;
}