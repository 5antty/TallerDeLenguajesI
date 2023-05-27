#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reservaMem(int **p, int n);
void incializacion(int *a, int n);
int maximo(int *a, int n);

int main()
{
    int n, i;
    int *arreglo;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    reservaMem(&arreglo, n);
    incializacion(arreglo, n);
    /*for (i = 0; i < n; i++)
    {
        printf("%d\n", arreglo[i]);
    }*/
    printf("El maximo num del arreglo es: %d", maximo(arreglo, n));
    free(arreglo);
    return 0;
}

// Reserva por referencia
void reservaMem(int **p, int n)
{
    *p = (int *)calloc(n, sizeof(int));
}

// Reserva mediante retorno de puntero
int *reservaMem(int n)
{
    int *p;
    *p = (int *)calloc(n, sizeof(int));
}

void incializacion(int *a, int n)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        a[i] = rand();
    }
}
int maximo(int *a, int n)
{
    int i, max = -9999;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}