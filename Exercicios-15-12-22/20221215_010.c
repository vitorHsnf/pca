#include <stdio.h>

// Tendo como dados de entrada a altura de uma pessoa
// construa um algoritmo que calcule seu peso ideal, usando
// a seguinte fórmula: (72.7*altura) - 58

int main()
{
    float altura, peso_ideal;

    printf("\nDigite a sua altura (metros): ");
    scanf("%f", &altura);

    peso_ideal = (72.7*altura) - 58;

    printf("Peso ideal: %.1f Kg", peso_ideal);

}