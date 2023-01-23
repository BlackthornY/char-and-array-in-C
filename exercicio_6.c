/* 6. Desenvolver um procedimento que concatene(junte) duas cadeias de caracteres e retorne o resultado.*/

#include <stdio.h>
#define tam 6

int size(char frase[]); //VERIFICA QUANTIDADE DE LETRAS
void concatena(char cadeia1[tam], char cadeia2[tam], char juntos[tam*2]);

int main()
{
    int i,pos;
    char cadeia1[tam],cadeia2[tam],juntos[tam*2];

    printf("Escreva a primeira cadeia : ");
    scanf("%s",cadeia1);

    printf("Escreva a segunda cadeia : ");
    scanf("%s",cadeia2);

    concatena(cadeia1,cadeia2,juntos);

    printf("%s",juntos);

    return 0;

}

int size(char frase[])           //VERIFICA QUANTIDADE DE LETRAS
{
    int i,cont=0;

    for(i=0;frase[i]!='\0';i++)
    {
        if(frase[i]!=' ')
        {
            cont++;
        }
    }

    return cont;
}

void concatena(char cadeia1[tam], char cadeia2[tam], char juntos[tam*2])
{
    int i,tamanho_1,tamanho_2,cont_1=0,cont_2=0;

    tamanho_1=size(cadeia1);
    tamanho_2=size(cadeia2);

    for(i=0;i<tam;i++)
    {
        if(cont_1<tamanho_1)
        {
            juntos[i]=cadeia1[cont_1];
            cont_1++;
        }

        if(cont_2<tamanho_2)
        {
            juntos[i+tamanho_1]=cadeia2[cont_2];
            cont_2++;
        }
    }

    juntos[tamanho_1+tamanho_2]='\0';

}
