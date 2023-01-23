/* 3. Desenvolva uma função que conte quantas palavras possui uma cadeia de caracteres informada.
Deve retornar a quantidade de palavras.*/

#include <stdio.h>
#define tam 30

int palavras(char frase[]); //FUNCAO : VERIFICAR QUANTIDADE DE PALAVRAS

int main() //ALGORITMO PRINCIPAL
{
    int palavras_cadeia;
    char frase[tam];

    printf("Escreva uma frase : ");
    scanf("%[^\n]s",frase);

    palavras_cadeia = palavras(frase);

    printf("Quantidade de palavras : %d ",palavras_cadeia);

    return 0;

}

int palavras(char frase[]) //FUNCAO : VERIFICAR QUANTIDADE DE PALAVRAS
{
    int i,cont=1;

    for(i=0;frase[i]!='\0';i++)
    {
        //PARA CONTAR O NÚMERO DE ESPAÇOS
        if(frase[i]==' ')
            cont++;
    }

    return cont;
}
