#include <stdio.h>

// Faça um programa que peça as 4 notas bimestrais
// e mostre a média 

int main()
{
    float N1, N2, N3, N4, media;
    printf("\n Notas bimestrais \n");

    printf("Primeira nota (N1): ");
    scanf("%f", &N1);

    printf("Segunda nota (N2): ");
    scanf("%f", &N2);

    printf("Terceira nota (N3): ");
    scanf("%f", &N3);

    printf("Quarta nota (N4): ");
    scanf("%f", &N4);

    media = (N1 + N2 + N3 + N4)/4;

    printf("Media bimestral: %.1f", media);

    return 0;
}
