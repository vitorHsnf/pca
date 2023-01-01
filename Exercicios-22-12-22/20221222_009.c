// Calcular os valores de x e y onde a seguinte expressão
// xy - x2 + y tem valor máximo, a partir dos números 
// naturais n e m tais que x <= m e y <= n

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int x, y, expressao; 
    int x_max = 0, y_max = 0;
    int valor_max = 0;

    printf("Digite o 1o numero natural: \n");
    scanf("%d", &n);
    printf("Digite o 2o numero natural: \n");
    scanf("%d", &m);

    for(x=0; x <= n; x++){
        for(y=0; y <= m; y++){
            expressao = x*y - x*x + y;
            if (expressao > valor_max){
                valor_max = expressao;
                x_max = x;
                y_max = y;
            }
        }
    }
    printf("Valor maximo da funcao: %d\n", valor_max);
    printf("Valores de x = %d e y = %d\n", x_max, y_max);

    return 0;
}