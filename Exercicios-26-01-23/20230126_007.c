/* Os elementos aij de uma matriz inteira Anxn representam os custos de transporte 
da cidade i para a cidade j. Dados n itinerários, cada um com k cidades, calcular o 
custo total para cada itinerário. */ 

#include <stdio.h>
#include <stdlib.h>
#define MAX 100  // Tamanho máximo da matriz

int main()
{   
    // Variáveis
    int custo_cidades[MAX][MAX];  // Custo entre as cidades
    int rotas[MAX];  // Rotas entre as cidades
    int n;  // Itinerários
    int k;  // Cidades
    int custo_total = 0;  // Custo da viagem

    // Lendo a qnt. de cidades 
    printf("Digite a quantidade de cidades:");
    scanf("%d", &k);

    // Verificando se a entrada é válida
    if (k <= 1 || k > MAX)
    {   
        while (k <= 1 || k > MAX)  // Entra no loop até a entrada ser válida
        {
            printf("Entrada invalida. Apenas valores maiores que 0 e menores que %d!\n", MAX);
            printf("Digite a quantidade de cidades:");
            scanf("%d", &k);
        }
    }

    // Lendo os custo entre cada cidade
    for (int i = 0; i < k; i++)
    {   
        for (int j = 0; j < k; j++)
        {   
            if (i != j)
                printf("Digite o custo para a cidade %d a cidade %d: ", i+1, j+1);
            else
                printf("Digite o custo para a cidade %d: ", i+1);
            scanf("%d", &custo_cidades[i][j]);

            // Fica em loop até que uma entrada válida seja lida
            while (custo_cidades[i][j] < 0) 
            {
                printf("Valor inválido.\n");
                if (i != j)
                    printf("Digite o custo para a cidade %d a cidade %d: ", i+1, j+1);
                else
                    printf("Digite o custo para a cidade %d: ", j+1);
                scanf("%d", &custo_cidades[i][j]);
            }
        }
        printf("\n");
    }
    
    // Imprime os custos de transporte na matriz
    printf("Matriz com os custos de transporte:\n");
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
            printf("[%2d]", custo_cidades[i][j]);
        printf("\n");
    }

    // Leitura do itinerário
    printf("Entre com o itinerario:");
    scanf("%d", &n);

    // Verificando a leitura
    if (n <= 0)  
    {
        // Fica em loop até ser lida uma entrada válida 
        while (n <= 0)  
        {   
            printf("Valor invalido. Deve ser maior que 0 e menor ou igual a %d!\n", k+1);
            printf("Entre com o itinerario:");
            scanf("%d", &n);
        }
    }

    // Lendo as rotas do itinerário
    for (int i = 0; i < n; i++)
    {   
        if (i == 0)
            printf("Digite a rota inicial (0): ");
        else if (0 < i && i < n-1)
            printf("Digite a rota seguinte:");
        else
            printf("Digite a rota final:");
        scanf("%d", &rotas[i]);

        // Verificando a leitura das rotas
        if (rotas[i] < 0 || rotas[i] > k-1)
        {
            while (rotas[i] < 0 || rotas[i] > k-1)
            {   
                printf("Rota invalida!\n");
                if (i == 0)
                    printf("Digite a rota inicial (0): ");
                else if (0 < i && i < n-1)
                    printf("Digite a rota seguinte:");
                else
                    printf("Digite a rota final:");
                scanf("%d", &rotas[i]);
            }
        }
    }
    // Imprime as rotas do itinerário
    printf("Rotas:\n");
    for (int i = 0; i < n-1; i++)
    {
        printf("[%d]-[%d] ", rotas[i], rotas[i+1]);
        printf("Custo: R$%d,00\n", custo_cidades[rotas[i]][rotas[i+1]]);
        custo_total += custo_cidades[rotas[i]][rotas[i+1]];
    }
    // Imprime o custo total de transporte
    printf(" Custo Total: R$%d,00\n", custo_total);

    return 0;
}