// Dado um número identificar se é um número primo. (Um
// número primo é aquele que é dividido apenas por um e por ele mesmo.)

#include <stdio.h>

int main()
{
    int i, num, inteiro=0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i=2; i <= num/2 ; i++){
        if (num % i == 0){
            inteiro ++;
            break;
        }
    }
    if (inteiro == 0){
        printf("%d eh um numero primo.\n", num);
    }else{
        printf("%d nao eh um numero primo.\n", num);
    }

    return 0;
}