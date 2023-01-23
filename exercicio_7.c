/* 7. Implementar um procedimento que converta todos os caracteres de uma cadeia de caracteres para maiúsculo.*/

#include <stdio.h>
#include <stdlib.h>
#define tam 30

void maiusculo(char frase[tam], char frase_maiusculo[tam]);

int main()
{
    char frase[tam],frase_maiusculo[tam];

    printf("Escreva uma frase : ");
    scanf("%[^\n]s",frase);

    maiusculo(frase,frase_maiusculo);

    printf("Frase em maiusculo : %s",frase_maiusculo);
    printf("\n");

    return 0;

}

void maiusculo(char frase[tam], char frase_maiusculo[tam])
{
    int i;

    for(i=0;frase[i]!='\0';i++)
    {
        frase_maiusculo[i]=toupper(frase[i]);
    }

    frase_maiusculo[i]='\0';
}

