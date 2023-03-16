/* 
Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. 
Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. 
Imprima os valores das variáveis antes e após a modificação.
*/

#include <stdio.h>

int main()
{   
    // Inicializando variáveis e ponteiros
    int a = 3, *p_a;
    float b = 4.5, *p_b;
    char c = 'A', *p_c;

    // Associando cada ponteiro a respectiva variável
    p_a = &a;
    p_b = &b;
    p_c = &c;

    // Imprimindo os valores inciais
    printf("Valores antes da modificacao: \n");
    printf("a = %d\n", a);
    printf("b = %.1f\n", b);
    printf("c = %c\n", c);

    // Modificando os valores das variáveis com ponteiros
    *p_a = 10;
    *p_b = 3.14;
    *p_c = 'Z';

    // Imprimindo os valores alterados
    printf("Valores modificados: \n");
    printf("a = %d\n", a);
    printf("b = %.1f\n", b);
    printf("c = %c", c);

    return 0;
}
