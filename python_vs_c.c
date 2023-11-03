#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Lentíssimo em Python, mas muito rápido em C!
void main()
{
    for(int i = 0; i < 10000000; i++)
    {
        char* nome = (char*) malloc(20*sizeof(char));
        strcpy(nome, "Pedro Jorge");
        free(nome);
    }
}
