/*Faça uma função que transforme um número binário (expressado como um inteiro) num número decimal. A transformação entre essas bases pode ser feita com a forma polinomial a seguir:
Número binário: 1101   ==>  1×2³ + 1×2² + 0x2¹ + 1×2^0 = 8 + 4 + 0 + 1 = 13 */

#include <stdio.h>
#include <math.h>

int converter_bd(int binario){
    int aux = 0, i, decimal = 0;

    for (i = 0; binario != 0; i++)
    {
        aux = binario%10;
        binario = binario/10;
        decimal = decimal + aux*pow(2, i);
    }
    return decimal;
}

int main(){
    int binario, decimal;

    printf("Converter binario em decimal");

    printf("\n \nDigite um numero binario: ");
    scanf("%d", &binario);

    printf("\nEm decimal: ", binario);

    decimal = converter_bd(binario);

    printf("%d", decimal);

    return 0;
}