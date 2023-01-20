/* 2. Aproveitando a ideia aplicada a quest�o anterior, implemente uma fun��o que retorne a quantidade de caracteres de uma cadeia
de caracteres, por�m excluindo da contagem os espa�os vazios */

#include <stdio.h>
#define tam 30

int tamanho(char frase[]); //FUNCAO : VERIFICAR TAMANHO DA CADEIA


int main()                      //ALGORITMO PRINCIPAL
{
    int tamanho_cadeia;
    char frase[tam];

    printf("Escreva seu nome : ");
    scanf("%[^\n]s",frase);

    tamanho_cadeia = tamanho(frase);

    printf("O tamanho da cadeia de caracteres : %d ",tamanho_cadeia);

}

int tamanho(char frase[])     //FUNCAO : VERIFICAR TAMANHO DA CADEIA
{
    int i,cont=0;

    // CONTA SOMENTE OS CARACTERES QUE N�O FOREM ESPA�OS EM BRANCO

    for(i=0;frase[i]!='\0';i++)
    {
        if(frase[i]!=' ')
            cont++;
    }

    return cont;
}

