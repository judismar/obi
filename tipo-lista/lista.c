#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_INICIAL_LISTA 8

struct lista
{
    int* a;
    int n;
};

Lista* criaLista()
{
    Lista* l = (Lista*) malloc(sizeof(Lista));
    l->n = 0; //(*l).n = 0;
    l->a = (int*) malloc(TAMANHO_INICIAL_LISTA*sizeof(int));
    return l;
}

void insere(Lista *l, int num)
{
    if(l->n == TAMANHO_INICIAL_LISTA)
    {
        printf("Overflow.\n");
        return;
    }
        //realocar array, pois deu overflow.
    l->a[l->n] = num;
    l->n ++;
}

void printLista(Lista *l)
{
    for(int k = 0; k < l->n; k++)
        printf("%d ", l->a[k]); //(*l).*(a+k)
    printf("\n");
}

void liberaLista(Lista *l)
{
    free(l->a);
    free(l);
}