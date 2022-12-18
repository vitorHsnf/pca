#include <stdio.h>

// Faça um programa que peça a temperatura em graus Celsius
// transforme e mostre em graus Celsius

int main()
{
    float celsius, fahren;
    printf("\n Converter Celsius --> Fahrenheit");
    printf("\nCelsius (C): ");
    scanf("%f", &celsius);

    fahren = (9*celsius)/5 + 32;

    printf("Fahrenheit (F): %.0f", fahren);

    return 0; 
}