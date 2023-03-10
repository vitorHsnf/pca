/* Escreva uma função que imprime os elementos de um vetor de float a partir 
de um endereço inicial (ponteiro) até um endereço final;
-> A função recebe como parâmetros dois ponteiros para float (os endereços inicial e final) 
   deve utilizar notação de ponteiros não de vetores;
-> Deve ser criada uma função main() para testar a função implementada com três vetores 
   de tamanhos e conteúdos diferentes;
-> A função main deve imprimir duas partes distintas de cada um dos três vetores, 
   utilizando a função criada.*/
#include <stdio.h>

void imprime_vetor(float *p_inicial, float *p_final)
{
    for (; p_inicial <= p_final; p_inicial++)
        printf("%.1f ", *p_inicial);
}

int main()
{
    float vet1[5] =  {5.2, 4.1, 3.7, 2.0, 1.0};
    float vet2[3] = {3.0, 2.0, 1.0};
    float vet3[2] = {1.6, 2.5};

    // Imprimindo os vetores com o uso de ponteiros
    printf("Imprimindo duas partes distintas de cada vetor: \n");

    // Vetor 1
    printf("\nVetor 1\n");
    printf("\tElementos 1-3: ");
    imprime_vetor(&vet1[0], &vet1[2]);
    printf("\tElementos 4-5: ");
    imprime_vetor(&vet1[3], &vet1[4]);

    // Vetor 2
    printf("\nVetor 2\n");
    printf("\tElementos 1-2: ");
    imprime_vetor(&vet2[0], &vet2[1]);
    printf("\t\tElementos 2-4: ");
    imprime_vetor(&vet2[2], &vet2[3]);

    // Vetor 3
    printf("\nVetor 3\n");
    printf("\tElemento 1: ");
    imprime_vetor(&vet3[0], &vet3[0]);
    printf("\t\tElemento 2: ");
    imprime_vetor(&vet3[1], &vet3[1]);

    return 0;
}
