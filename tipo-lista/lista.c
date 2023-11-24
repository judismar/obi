#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int* a;
    int n;
    int tam_array;
};

Lista* criaLista()
{
    Lista* l = (Lista*) malloc(sizeof(Lista));
    l->n = 0; //(*l).n = 0;
    l->tam_array = 2;
    l->a = (int*) malloc(2*sizeof(int));
    return l;
}

void insere(Lista *l, int num)
{
    //l->n é equivalente a (*l).n
    if(l->n == l->tam_array) //array cheio!!
    {
        //alocar array com dobro do tamanho
        l->tam_array *= 2;
        int* v = (int*) malloc(l->tam_array*sizeof(int));
        for(int k = 0; k < l->n; k++)
            v[k] = l->a[k];
        free(l->a);
        l->a = v;
    }
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