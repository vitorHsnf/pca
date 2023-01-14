/*Usando a função programada em 1 crie outra função que recebe 
dois números inteiros positivos e verifica se o primeiro é uma 
permutação de b (para a ser uma permutação tem que ter de cada
número entre 0 e 9 a mesma quantidade)*/

#include <stdio.h>

int contar(int n, int d){
    int cont = 0;

    while (n > 0){

        if(n % 10 == d)
            cont++;
        n = n/10;
    }
    return cont;
}

int main(){
    int num1, num2, permutacao = 1, i;

    printf("Digite o 1o numero: ");
    scanf("%i", &num1);

    printf("Digite o 2o numero: ");
    scanf("%i", &num2);

    for(i=1; i <= 9; i++){
        if(contar(num1, i) != contar(num2, i))
            permutacao = 0;
    }
    if (permutacao == 1)
        printf("%i eh permutacao de %i", num1, num2);
    else 
        printf("%i nao eh permutacao de %i", num1, num2);

    return 0;
}