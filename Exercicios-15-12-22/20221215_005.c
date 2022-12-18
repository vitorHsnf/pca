#include <stdio.h>

// Faça um programa que calcule a área de um quadrado,
// em seguida mostre o dobro desta área para o usuário

int main()
{
    float lado, area, dobro_area;

    printf("\nDigite o lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    dobro_area = area * 2;

    printf("Area do quadrado: %.2fm2", area);

    printf("\nDobro da area: %.2fm2", dobro_area);

    return 0;

}