/* 5. Implementar um procedimento que busque dentre os caracteres de uma cadeia de caracteres fornecida as
ocorrências de uma sub-cadeia. Seu procedimento deve retornar um vetor contendo todas as posicoes iniciais de ocorrencia
da sub-cadeia na cadeia de caracteres principal.*/

#include <stdio.h>
#define tam 30

int size(char frase[]); //VERIFICA QUANTIDADE DE LETRAS
void procura(char frase[tam], char sub[tam], int vetor[tam], int *pos); //PROCURA UMA SUB-CADEIA DENTRO DE UMA CADEIA DE CARACTERES


int main()
{
    int i,tamanho,vetor[tam],pos;
    char frase[tam], sub[tam]="la";

    printf("ALGORITMO : Verifica se ha uma sub-cadeia \"la\" na frase.");
    printf("\nEscreva uma frase : ");
    scanf("%[^\n]s",frase);

    tamanho = size(frase);

    printf("Quantidade de letras : %d",tamanho);

    procura(frase,sub,vetor,&pos);

    for(i=0;i<pos;i++)
    {
        printf("\nPosicao : %d",vetor[i]);
    }

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

void procura(char frase[tam], char sub[tam], int vetor[tam], int *pos) //PROCURA UMA SUB-CADEIA DENTRO DE UMA CADEIA DE CARACTERES
{
    int i,cont=0,tamanho,tamanho2;

    *pos=0;

    tamanho=size(frase);
    tamanho2=size(sub);

    for(i=0;i<tam;i++)
    {
        if(frase[i]==sub[cont])
        {
            cont++;
            if(cont==tamanho2)
            {
                vetor[*pos]=i-tamanho2+1;
                (*pos)++;
                cont=0;
            }
        }
        else
            cont=0;

    }

}




