#include <stdio.h>
#include <stdlib.h>
#define N 2000000

int busca(int*, int tamanho_array, int x);
int bsearchInt(const void* a, const void* b)
{
  return (*(int*)a - *(int*)b);
}

int main()
{
    int x = 1000000;
    int v[N];
    for(int i = 1; i <= N; i++)
        v[i-1] = i*3;
    if(bsearch(&x, v, N, sizeof(int), bsearchInt)) printf("Achou!\n");
    else printf("Não achou.\n");
    return 0;
}

int busca(int* a, int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            return 1;
        }
        else
        {
            if(x < a[i])
            {
                return 0;
            }
        }
    }
    return 0;
}