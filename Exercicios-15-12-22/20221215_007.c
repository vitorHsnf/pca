#include <stdio.h>

// Faça um programa que peça a temperatura em graus Fahrenheit
// transforme e mostre a temperatura em graus Celsius
// C = (5*(F-32)/9)

int main()
{
    float fahren, celsius;

    printf("\n Conversao de temperaturas (Fahrenheit -> Celsius)");
    printf("\nFahrenheit (F): ");
    scanf("%f", &fahren);

    celsius = 5*(fahren-32)/9;

    printf("Em Celsius (C):%.0f", celsius);

    return 0;
}
