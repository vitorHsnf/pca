// A partir de um número inteiro positivo n.
// Determinar os inteiros entre 1 e n que são comprimento 
// da hipotenusa de um triângulo retângulo com catetos inteiros.
// a e b --> catetos, c --> hipotenusa, a2 + b2 = c2

#include <stdio.h>
#include <stdlib.h>

#define VERDADEIRO 1
#define FALSO 0

int main()
{
    int n, cateto1, cateto2, hipotenusa;
    int equivalente; 

    printf("Digite o comprimento maximo da hipotenusa: ");
    scanf("%d", &n);

    for (hipotenusa = 1; hipotenusa <= n; hipotenusa++){
        equivalente = FALSO;

        for(cateto1 = 1; cateto1 < hipotenusa && !equivalente; cateto1++){
            cateto2 = cateto1;

            while(cateto1*cateto1 + cateto2*cateto2 < hipotenusa*hipotenusa){
                cateto2++;
            
            if (cateto1*cateto1 + cateto2*cateto2 == hipotenusa*hipotenusa){
                
                printf("Hipotenusa = %d, catetos %d e %d\n", hipotenusa, cateto1, cateto2);
                equivalente = VERDADEIRO;
                }
            }
        }
    }
    return 0;
}