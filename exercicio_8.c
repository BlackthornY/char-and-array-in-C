/* 8. Conforme implementado na questao anterior, implemente outra funcao que converta todos os caracteres para minusculo.*/

#include <stdio.h>
#include <stdlib.h>
#define tam 30

void minusculo(char frase[tam], char frase_minusculo[tam]);

int main()
{
    char frase[tam],frase_minusculo[tam];

    printf("Escreva uma frase : ");
    scanf("%[^\n]s",frase);

    minusculo(frase,frase_minusculo);

    printf("Frase em minusculo : %s",frase_minusculo);
    printf("\n");

    return 0;

}

void minusculo(char frase[tam], char frase_minusculo[tam])
{
    int i;

    for(i=0;frase[i]!='\0';i++)
    {
        frase_minusculo[i]=tolower(frase[i]);
    }

    frase_minusculo[i]='\0';
}


