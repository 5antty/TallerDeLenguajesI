#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>

float **crear(float n)
{
    int i;
    float **aux = calloc(n, sizeof(float *));
    for (i = 0; i < n; i++)
    {
        aux[i] = calloc(n, sizeof(float));
    }
    return aux;
}
float suma(float **m, int n)
{
    int i, j;
    float total = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            total += m[i][j];
        }
    }
    return total;
}

void liberar(float **m, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        free(m[i]);
    }
    free(m);
}