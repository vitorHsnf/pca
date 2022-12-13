// Ler base e altura de um triângulo
// Calcular e escrever área=(base*altura)/2

#include <stdio.h>

int main()
{
    float area, base, altura;
    printf("\n Base do triangulo: ");
    scanf("%f", &base);
    printf("\n Altura do triangulo: ");
    scanf("%f", &altura);

    area = (base*altura)/2;

    printf("\n Area do Triangulo = %.1fm", area);

    return 0;
    
}