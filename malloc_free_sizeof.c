#include <stdio.h>
#include <stdlib.h>
#define N 5

void printa(int*, int tamanho_array);
int* soma_array(int*, int*, int tamanho);

void main()
{
    int vetor[N] = {0, -1, -2, 1, 0};
    int vetor2[N] = {4, 7, -1, 0, 0};
    //soma: 4 6 -3 1 0
    int* vetor3 = soma_array(vetor, vetor2, N);
    printa(vetor3, N);
    free(vetor3);
}

void printa(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]); //*(a+i)
    }
    printf("\n");
}

int* soma_array(int* a1, int* a2, int n)
{
    int* soma = (int*) malloc(n*sizeof(int));
    //int soma[n]; (caso fosse local)
    for(int i = 0; i < n; i++)
    {
        soma[i] = a1[i] + a2[i];
    }
    return soma;
}
