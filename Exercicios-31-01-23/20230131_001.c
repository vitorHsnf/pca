/*Faça funções que:
- Receba uma palavra e a imprima de trás-para-frente. 
- Receba do usuário uma string e imprime a string sem vogais.
- Transforma todos os caracteres de uma string em maiúsculos.
- Função que recebe uma string e um caractere, e retorne o número de vezes que esse caractere aparece na string.
- Função que recebe uma string e um caractere, e apague todas as ocorrências desse caractere na string*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#define MAX 100 // Valor máximo de caracteres

// Função que imprime a string ao contrário. Recebe uma string e o seu tamanho.
void imprime_inversa(char a[], int tamanho)
{
    int i;
    // Começa a imprimir na tela com o último elemento da string até o primeiro
    for (i = tamanho-1; i >= 0; i--)
        printf("%c", a[i]);
}

// Função que "retira" as vogais da string. Recebe uma string e seu tamanho
void retira_vogais(char a[], int tamanho)
{
    int i, j;
    char vogais[] = "aeiouAEIOU";  // Declaração das vogais no vetor "vogais"
    int tamanho_v = strlen(vogais);  // Lendo o tamanho do vetor "vogais"

    // Verificando cada caractere da string
    for (i = 0; i < tamanho; i++)
    {   
        // Comparando com os caracteres de "vogais"
        for (j = 0; j < tamanho_v; j++)
        {   
            // Se o caractere for uma vogal, interrompe a verificação
            if (a[i] == vogais[j])
                break;
        }
        // Se o caractere passou pela verificação, imprime na tela
        if (j == tamanho_v)
            printf("%c", a[i]);
    }
}

// Função que põe as letras em maiúsculas. Recebe uma string e o seu tamanho
void letra_maiuscula(char a[], int tamanho)
{
    int i;

    // Verifica caracter por caracter da string
    for (i = 0; i < tamanho; i++)
    {   
        // Se for minúsculo, faz a conversão para maiúsculo
        if (a[i] >= 'a' && a[i] <= 'z')
            printf("%c", a[i] - ('a' - 'A'));

        // Se já for maiúsculo, repete o mesmo
        else 
            printf("%c", a[i]);
    }
}

/* Função que retorna quantas vezes um caracter aparece na string. 
   Recebe um caracter, uma string e o tamanho da string.*/
int conta_ocorrencias(char caractere, char a[], int tamanho)
{
    int contador = 0;
    for (int i = 0; i < tamanho; i++)
    {   
        // Se o caracter corresponder a outro da string, faz a contagem
        if (caractere == a[i]) 
            contador += 1;
    }
    return contador;
}

/* Função que "remove" as ocorrências do caracterr na string. 
   Recebe um caracter, uma string e o tamanho da string. */
void remove_ocorrencias(char caractere, char a[], int tamanho)
{
    int i, aux;  // A variável aux como indicador da ocorrência na string
    for (i = 0; i < tamanho; i++)
    {
        if (caractere == a[i])  // Se forem correspondentes, "aux" recebe 1 
            aux = 1;
        else  // Se não forem, "aux" recebe 0
            aux = 0;
        if (aux == 0)  // Imprime na tela somente se o "aux" for 0
            printf("%c", a[i]);
    }
}

// Programa principal
int main()
{   
    // Variáveis
    char palavra[MAX];
    int caracter, tamanho_p;

    // Lendo a string
    printf("Digite uma palavra:");
    scanf("%s", palavra); 
    tamanho_p = strlen(palavra); // Lendo o tamanho da string

    // Imprimindo a string ao contrário
    printf("\n%s de tras-para-frente: ", palavra);
    imprime_inversa(palavra, tamanho_p); 

    // Imprimindo sem vogais
    printf("\nString sem as vogais: ");
    retira_vogais(palavra, tamanho_p); 

    // Imprimindo com as letras todas maiúsculas
    printf("\nString em caixa alta: ");
    letra_maiuscula(palavra, tamanho_p); 

    // Lendo um caracter, e imprimindo as ocorrências na string
    printf("\n\nDigite um caracter: ");
    caracter = getche();
    printf("\n%c aparece %d vezes na string", caracter, conta_ocorrencias(caracter, palavra, tamanho_p));

    // Lendo um caracterer, e imprimindo a string sem as ocorrências desse caracter
    printf("\n\nDigite um caracter: ");
    caracter = getche();
    printf("\nString sem as ocorrencias do caracter '%c': ", caracter); 
    remove_ocorrencias(caracter, palavra, tamanho_p);

    return 0;
}
