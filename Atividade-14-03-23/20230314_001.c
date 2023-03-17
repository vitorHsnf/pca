/* 
Faça um programa que calcula a média e o desvio padrão das notas de uma turma;
- O programa deve solicitar no início a quantidade de alunos na turma e alocar 
dinamicamente um vetor de float onde as notas dos alunos digitadas devem ser 
armazenadas;
- Você deve criar uma função “mediaDesvio” para calcular a média e o desvio padrão 
e retornar estes valores através de parâmetros passados por referência (ponteiros). 
A função recebe como parâmetro o ponteiro para o vetor, a quantidade de elementos 
no vetor, e dois ponteiros: media e desvio onde deve guardar os resultados;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float* notas, int n, float *media, float *desvio)
{
    float soma_m = 0.0;
    float soma_dp = 0.0;

    // Calculando a média
    for (int i = 0; i < n; i++)
        soma_m += notas[i];
    *media = soma_m/n;

    // Calculando o desvio padrão
    for (int i = 0; i < n; i++)
        soma_dp += pow(notas[i] - *media, 2);
    
    *desvio = sqrt(soma_dp/n);

}

int main()
{
    int qtdAlunos = 0;
    float *notas;
    float media, desvio;

    // Lendo a qnt. de alunos
    printf("Digite a qnt. de alunos: ");
    scanf("%d", &qtdAlunos);

    // Alocando memória para 'notas' de acordo com a qnt. de alunos
    notas = (float*) malloc (qtdAlunos*sizeof(float));

    if (notas != NULL)
    {   
        // Lendo as notas de cada aluno
        for (int i = 0; i < qtdAlunos; i++){
            printf("Entre com a nota do aluno %d: ", i+1);
            scanf("%f", &notas[i]);
        }
        // Imprimindo as notas lidas
        printf("\n Notas lidas: \n");
        for (int i = 0; i < qtdAlunos; i++)
            printf("Aluno %d -> %3.1f \n", i+1, notas[i]);

    }
    // Chamada da função 
    mediaDesvio(notas, qtdAlunos, &media, &desvio);

    // Imprimindo a média e o desvio padrão dos alunos
    printf("\nMedia da turma: %.1f\n", media);
    printf("Desvio Padrao: %.1f\n", desvio);

    // Liberando a memória após uso
    free(notas);

    return 0;
}
