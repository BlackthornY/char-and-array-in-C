/* 4. Implemetentar uma função ou (procedimento) que receba uma cadeia de caracteres como parâmetro e faça
a separação de todas as palavras do texto. Sua função deve retornar a quantidade de palavras separadas e uma
matriz contendo cada uma das palavras separadas. Faça um procedimento auxiliar que permita imprimir a lista
de palavras separadas.*/

#include <stdio.h>
#define tam 30

int quantidade(char frase[]);  //FUNCAO : VERIFICAR NÚMERO DE PALAVRAS
void realocar(char frase[tam], char matriz[tam][tam]);  //PROCEDIMENTO : COLOCAR PALAVRAS DE UMA FRASE EM UMA MATRIZ
void imprimir(char frase[tam], char matriz[tam][tam]);  //PROCEDIMENTO : IMPRIME A MATRIZ SEM ESPACOS VAZIOS

int main() //ALGORITMO PRINCIPAL
{

    char frase[tam],matriz[tam][tam];
    int i, letras, palavras;

    //ENTRAR COM FRASE
    printf("Escreva seu nome : ");
    scanf("%[^\n]s",frase);

    //CHAMA FUNCAO : VERIFICAR NÚMERO DE PALAVRAS DA FRASE
    palavras = quantidade(frase);

    //MOSTRA QUANTIDADE DE PALAVRAS
    printf("\nQuantidade de palavras : %d",palavras);

    realocar(frase,matriz);
    imprimir(frase,matriz);

    return 0;

}

int quantidade(char frase[])  //FUNCAO : VERIFICAR NÚMERO DE PALAVRAS
{
    int i,aux=1;
    for(i=0;frase[i]!='\0';i++)
    {
        if(frase[i]==' ')
            aux++;
    }

    return aux;
}

void realocar(char frase[tam],char matriz[tam][tam]) //PROCEDIMENTO : COLOCAR PALAVRAS DE UMA FRASE EM UMA MATRIZ
{
    int i,j,aux=0,aux2=0,aux3=0,imprime;

    for(i=0;frase[aux2]!='\0';i++)
        {

            matriz[aux][aux3]=frase[aux2];

            if(frase[aux2]==' ' && frase[aux2]!='\0')
            {
                aux++;
                aux3=-1;

            }
            aux3++;
            aux2++;
        }
}

void imprimir(char frase[tam], char matriz[tam][tam])    //PROCEDIMENTO : IMPRIME A MATRIZ SEM ESPACOS VAZIOS
{
    int i,palavras;

    palavras = quantidade(frase);

    printf("\n\n");

    for(i=0;i<palavras;i++)
    {
        printf("%s",matriz[i]);
        printf("\n");
    }
}
