// Ler nome, sexo e idade de uma pessoa
// Verificar se a pessoa é mulher

#include <stdio.h>

int main()
{
    char gender, name[200];
    int age;
    printf("\n Digite o seu nome: ");
    scanf("%[^\ns]", name);

    printf("\n Idade: ");
    scanf("%d", &age);

    printf("\n Sexo [M/F]: ");
    scanf("%s", &gender);

        if(gender == 'F')
        {
        printf("\n Bem vinda, %s!", name);
        }
        if(gender == 'M')
        {
        printf("\n Bem vindo, %s!", name);
        }

getchar();
return 0;
}