/* Faça uma função que transforme um numero decimal em binário. (procura em internet como é feita essa transformação) */

#include <stdio.h>
#include <math.h>


void converter_bd(decimal){

    int i, aux = 0, binario = 0;

    if (decimal == 0)
        printf("%d", decimal);
    else {
        converter_bd(decimal/2);
        printf("%d", decimal % 2);
    }
}

int main(){
    int decimal; 
    int binario;

    printf("Conversor de Decimal -> Binario");
    printf("\n\nDigite o numero decimal: ");
    scanf("%d", &decimal);

    printf("Em binario: ");
    converter_bd(decimal);

    return 0;
}
