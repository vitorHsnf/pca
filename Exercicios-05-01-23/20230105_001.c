/* Faça um programa que leia dois valores inteiros x e y entre 0 e 1000. 
Encontre o maior entre eles e imprima:
--> O percentual do menor em relação ao maior
--> O módulo da diferença entre o maior e o menor
--> O programa deve utilizar três funções:

    a) scanIntIntervalo: Função para ler inteiros do teclado 
    garantindo que eles estejam dentro de um intervalo pré-determinado;

    b) percentual: Função para calcular o percentual:  100*valor/total

    c) absdif: Função que retorna o valor absoluto da diferença entre dois números reais.*/

#include <stdio.h>
#include <math.h>

int x, y, maior, menor;

void scanIntIntervalo(){

    if (x < 0 || x > 1000){
        while (x < 0 || x > 1000){
            printf("\nO 1o valor eh invalido");
            printf("\nDigite o 1o valor: ");
            scanf("%i", &x);
        }

    }
    if (y < 0 || y > 1000){
        while (y < 0 || y > 1000){
        printf("\nO 2o valor eh invalido \n");
        printf("\nDigite o 2o valor: ");
        scanf("%i", &y);
        }
    }

}

void percentual(int valor, int total)
{   
    float p;
    p = (100*valor)/total; 
    printf("Percentual do menor(%d) em relacao ao maior(%d): %.1f%%\n", menor, maior, p);
}

int absdif(int x1, int y1){
    return fabs(x1- y1);
}

int main()
{
    int modulo;

    printf("Digite o 1o valor: ");
    scanf("%i", &x);


    printf("Digite o 2o valor: ");
    scanf("%i", &y);

    scanIntIntervalo();

    maior = x;
    menor = y;

    if (y > maior){
        maior = y;
        menor = x;
    }

    percentual(menor, maior);

    modulo = absdif(x, y);
    printf("Modulo da diferenca entre o maior e o menor: |%d-%d| = %i\n", maior, menor, modulo);

    return 0;

}