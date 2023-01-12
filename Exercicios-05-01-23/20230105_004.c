/*Na matemática, o fatorial de um número natural n, representado por n!, 
  é o produto de todos os inteiros positivos menores ou iguais a n.
  Construa uma função que receba como parâmetro n e retorne o fatorial de n:
  int fat(int n)  //Recebe n como parâmetro e retorna n!*/

#include <stdio.h>

int fat(int n){
    int fatorial;

    if (n == 0 || n == 1){
        fatorial = 1;
    } else {
        for (fatorial = 1; n > 1 ; n--){
            fatorial = fatorial * n;
        }
    }
    return fatorial;
}

int main(){
    int num;
    printf("Digite um numero natural: ");
    scanf("%d", &num);
    if (num < 0){
        printf("Numero invalido. Tente novamente.");
    }else{
        printf("Fatorial de %d: %d", num, fat(num));
    }
  }