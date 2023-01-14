/*Faça uma função que retorne se um número inteiro positivo x e segmento 
de outro número inteiro positivo y, onde x < y (pode usar a função desenvolvida em 3) 
Ex. x= 678, y= 567890 R/ é um segmento; x= 1243, y= 2212435 R/ é um segmento;*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int verifica_digito(int x, int y){

    while(y != 0 && x%10 == y%10){
        x = x/10;
        y = y/10;
    }
    if (y == 0)
        return TRUE;
    else
        return FALSE;
}

int main()
{
    int x, y, corresponde, maior, menor;

    printf("Entre com dois valores:");
    scanf("%i %i", &x, &y);

    maior = x;
    menor = y;

    if (x > y){
        maior = x;
        menor = y;
    }else{
        maior = y;
        menor = x;
    }
    corresponde = FALSE;

    while(maior >= menor){
        if (verifica_digito(maior, menor) == TRUE)
            corresponde = TRUE;
        maior = maior/10;
    }

    if (corresponde == TRUE)
        printf("%i eh segmento de %i", x, y);
    else
        printf("%i nao corresponde a %i", x, y);

    return 0;
}