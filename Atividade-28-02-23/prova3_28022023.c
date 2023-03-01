/* O professor tem duas equipes na disciplina, cada equipe está formada
por seis alunos identificados pelo nome e sexo. Cada aluno obteve uma nota
final na disciplina (valor real entre 0 e 10).

a) Crie estruturas de dados baseadas em arrays para trabalhar com as informações da turma
b) Atribua valores para cada estrutura criada na letra A)
c) Determine e imprima qual equipe tem a maior qnt. de mulheres
d) Como parte de um processo de seleção para participar de um projeto, se precisa ter nota 
final maior ou igual de 8.0, e ser do sexo feminino. Crie e preencha uma nova estrutura
com os nomes das alunas das duas equipes que atendem a essas condições
e) Imprimir os nomes das alunas que podem participar do projeto
f) Faça uma função que acrescente um ponto para as alunas de uma equipe e use essa função
para acrescentar um ponto às alunas da segunda equipe;
g) Faça uma função que permita adicionar um novo aluno em uma das equipes, solicitando as info.
do mesmo ao usuário  */

#include <stdio.h>
#include <string.h>
#define EQUIPES 2  // Qnt. de equipes
#define ALUNOS 8  // Qnt. máxima de alunos por equipe
#define MAX_NOME 50  // Tamanho máximo do nome de alunos

// Assinaturas de Funções
void questao_c(char gender[EQUIPES][ALUNOS]);

void questao_d(char gender[EQUIPES][ALUNOS], 
               float notas[EQUIPES][ALUNOS], 
               char nomes[EQUIPES][ALUNOS][MAX_NOME]);

void questao_e(char projeto[ALUNOS][MAX_NOME], int alunas);

void questao_f(char nomes[EQUIPES][ALUNOS][MAX_NOME], 
               float notas[EQUIPES][ALUNOS], 
               char gender[EQUIPES][ALUNOS], int equipe);

void questao_g(char nomes[EQUIPES][ALUNOS][MAX_NOME], 
                char gender[EQUIPES][ALUNOS], float notas[EQUIPES][ALUNOS]);

int main() 
{   
    // Questão A e B
    char nomes[EQUIPES][ALUNOS][MAX_NOME] = {
        {"Jadice", "Maria", "Lucas", "Marcus", "Maria Fernanda", "Nero"},  // Equipe 1 
        {"Rita", "Jenna", "Silva", "Tereza", "Judith", "Alex"} // Equipe 2

    };
    char sexo[EQUIPES][ALUNOS] = {{'F', 'F', 'M', 'M', 'F', 'M'}, 
                                  {'F', 'F', 'M', 'F', 'F', 'M'}};
    float notas[EQUIPES][ALUNOS] = {{8.5, 9.0, 7.5, 8.8, 9.6, 5.2}, 
                                    {8.0, 9.6, 6.5, 4.2, 8.9, 7.4}};

    // Imprimindo as equipes na tela
    for (int i = 0; i <= EQUIPES - 1; i++)
    {
        printf("Equipe %d\n", i+1);

        for (int j = 0; j <= ALUNOS - 1; j++)
        {
            if (nomes[i][j][0] != '\0')
                printf("[%2s]", nomes[i][j]);
        }
        printf("\n");
    }
    // Questão C
    questao_c(sexo);
    // Questão D
    questao_d(sexo, notas, nomes);
    // Questão F
    questao_f(nomes, notas, sexo, 2);

    // Questão G
    questao_g(nomes, sexo, notas);
    return 0;
}

void questao_c(char gender[EQUIPES][ALUNOS])
{
    int tamanho_equipe1 = 0;  // Contar as mulheres da equipe 1
    int tamanho_equipe2 = 0; // Contar as mulher da equipe 2

    // Verificando por equipe
    for (int i = 0; i < EQUIPES; i++)
    {   
        // Verificando cada aluno da equipe
        for (int j = 0; j < ALUNOS; j++){
            if (gender[i][j] == 'F')
            {
                // Verificando de qual equipe o aluno pertence
                if (i == 0)
                    tamanho_equipe1++; 
                else
                    tamanho_equipe2++;
            }
        }
    }
    // Imprimindo a equipe que tem mais mulheres
    if (tamanho_equipe1 > tamanho_equipe2)
        printf("-> A equipe 1 apresenta mais mulheres\n");
    else if (tamanho_equipe2 > tamanho_equipe1)
        printf("-> A equipe 2 apresenta mais mulheres\n");
    else
        printf("-> As duas equipes tem a mesma qtd. de mulheres\n");
}

void questao_d(char gender[EQUIPES][ALUNOS], float notas[EQUIPES][ALUNOS], char nomes[EQUIPES][ALUNOS][MAX_NOME])
{
    char selecao[ALUNOS][MAX_NOME];  // Lista de alunas selecionadas
    int aprovadas = 0;  // Indice para saber as alunas aprovadas

    // Verificando por equipes
    for (int i = 0; i < EQUIPES; i++)
    {   
        // Verificando cada aluno da equipe
        for (int j = 0; j < ALUNOS; j++){

            // Verificando as condições
            if (gender[i][j] == 'F' && notas[i][j] >= 8){
                // Copiando o nome para a lista selecao
                strcpy(selecao[aprovadas], nomes[i][j]); 
                aprovadas++;  // Soma um no índice de aprovadas
            }
        }
    }
}   

void questao_e(char projeto[ALUNOS][MAX_NOME], int alunas)
{   
    printf("\nAlunas selecionadas: \n");
    for (int i = 0; i < alunas; i++){
        printf("-> [%2s]", projeto[i]);
    }
}

void questao_f(char nomes[EQUIPES][ALUNOS][MAX_NOME], 
                float notas[EQUIPES][ALUNOS], char gender[EQUIPES][ALUNOS], int equipe)
{   
    // Contando por equipes
    for (int i = 0; i < ALUNOS; i++){
        // Contando cada aluno da equipe
        if (gender[equipe-1][i] == 'F')  // É subtraído 1 da variável equipe para evitar erro de índice.
        {   
            // Se a nota for menor que 9, acrescenta um ponto
            if (notas[equipe-1][i] < 9.0)
                notas[equipe-1][i]++;
            // Se for maior que 9, arredonda a nota para 10
            else if (notas[equipe-1][i] > 9.0)
                notas[equipe-1][i] += 10 - notas[equipe-1][i];
        }
    }
    // Imprimindo as notas da equipe atualizadas
    printf("\nNotas atualizadas:");
    printf("\nEquipe %d\n", equipe);
    for (int i = 0; i < ALUNOS; i++)
    {
        if (nomes[equipe-1][i][0] != '\0')
            printf("\t%s: %.1f\n", nomes[equipe-1][i], notas[equipe-1][i]);
    }
}

void questao_g(char nomes[EQUIPES][ALUNOS][MAX_NOME], char gender[EQUIPES][ALUNOS], float notas[EQUIPES][ALUNOS])
{   
    // Dados do novo aluno
    char novo_aluno[MAX_NOME];
    char sexo;
    float nota;
    int equipe;  // Equipe dos alunos
    char resposta;  // Flag de resposta 
    
    // Lendo se o usuário deseja adicionar algum aluno
    printf("Deseja adicionar algum aluno? [S/N]");
    scanf(" %c", &resposta);

    if (resposta == 'N' || resposta == 'n')
        return;
    else{

        // Lendo em qual equipe será adicionado o aluno
        printf("Deseja adicionar em qual equipe? [1 ou 2]");
        scanf("%d", &equipe);
        if (equipe == 1 || equipe == 2){
            printf("Nome do novo aluno:");
            scanf("%s", novo_aluno);

            printf("Sexo do aluno (M ou F):");
            scanf(" %c", &sexo);

            printf("Nota do aluno: ");
            scanf("%f", &nota);

            // Verfificando um espaço livre na equipe
            int posicao = -1;
            for (int i = 0; i < ALUNOS; i++)
            {
                if (nomes[equipe-1][i][0] == '\0'){
                    posicao = i;
                    break;
                }
            }

            // Adicionando o novo aluno na equipe
            if (posicao != -1)
            {
                strcpy(nomes[equipe-1][posicao], novo_aluno);
                gender[equipe-1][posicao] = sexo;
                notas[equipe-1][posicao] = nota;
                printf("Aluno adicionado na equipe %d\n", equipe);
            }
            else
                printf("A equipe %d ja possui o num. maximo de membros.", equipe);
            
            // Imprimindo a equipe com o novo aluno adicionado
            for (int i = 0; i < ALUNOS; i++)
                printf("[%s]", nomes[equipe-1][i]);
        }
    }
}