/* Um centro materno-infantil deseja criar um programa para recomendar aos médicos 
   sobre o tipo de parto a ser adotado. O mecanismo de recomendação utiliza o peso 
   do feto e quantidade de semanas de gestação para sugerir o tipo de parto mais indicado.

   Desenvolva um programa na linguagem C, o qual deverá:
    - Criar uma função para ler o peso do feto em gramas e a quantidade de semanas da gestação.
    - Criar uma  função para:
        - Caso o peso do feto seja inferior que 100 gramas ou a quantidade de semanas menor que 28, o programa deverá exibir a mensagem "Parto não deverá ser realizado, reavaliar clinicamente" e encerrar a execução.
        - Caso contrário, o programa deverá calcular a quantidade de meses (considerar 4 semanas para cada mês) do feto e exibir uma das recomendações abaixo:
        .Peso superior a 2.500 gramas e com mais de 7 meses: "Parto normal";
        .Peso superior a 2.500 gramas e abaixo ou com 7 meses: "Parto Cesariana";
        .Entre 2.000 gramas e 1.500 gramas e acima de 9 meses: "Parto normal";
        .Qualquer outra combinação, "Parto Cesariana".
    Utilizar as duas funções num programa. */

#include <stdio.h>

void verifica_parto(float peso, int semanas){

    int meses;

    if (peso < 100 || semanas < 28){
        printf("\nParto nao devera ser realizado, reavaliar clinicamente");
    } 
    else{
        meses = semanas/4;
        printf("\nMeses: %i", meses);

        if (peso > 2500 && meses > 7){
            printf("\nParto normal.");
        } else if (peso > 2500 && meses <= 7){
            printf("\nParto Cesariana");
        } else if (1500 <= peso && peso <= 2000 && meses > 9){
            printf("\nParto normal");
        } else {
            printf("\nParto Cesariana");
        }
    }
}


int main()
{
    float peso_feto;
    int qnt_semanas;

    printf("Digite o peso do feto: ");
    scanf("%f", &peso_feto);
    printf("Digite a quantidade de semanas da gestante:");
    scanf("%i", &qnt_semanas);

    printf("\nPeso do feto: %.1fg\n", peso_feto);
    printf("\nQuantidade de semanas: %i semanas\n", qnt_semanas);

    verifica_parto(peso_feto, qnt_semanas);

    return 0;
}
