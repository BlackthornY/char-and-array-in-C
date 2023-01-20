/* 1. Desenvolva uma função responsável por obter o tamanho de uma cadeia de caracteres */

#include <stdio.h>
#define tam 30

int tamanho(char frase[]); //FUNCAO : VERIFICAR TAMANHO DA CADEIA


int main() //ALGORITMO PRINCIPAL
{
    int tamanho_cadeia;
    char frase[tam];

    printf("Escreva seu nome : ");
    scanf("%[^\n]s",frase);

    tamanho_cadeia = tamanho(frase);

    printf("O tamanho da cadeia de caracteres : %d ",tamanho_cadeia);

}

int tamanho(char frase[]) //FUNCAO : VERIFICAR TAMANHO DA CADEIA
{
    int i;

    for(i=0;frase[i]!='\0';i++)
    {}

    return i;
}
