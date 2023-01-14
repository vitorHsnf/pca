/*Faça uma função que dados dois inteiros positivos x e y verifica se y 
corresponde aos últimos dígitos de x. Ex. x= 567890, y=890 R/corresponde; 
x= 2457, y= 245 R/não corresponde; x= 457, y= 2457 R/não corresponde*/

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
        printf("%i eh segmento de %i", y, x);
    else
        printf("%i nao corresponde a %i", y, x);

    return 0;

}
