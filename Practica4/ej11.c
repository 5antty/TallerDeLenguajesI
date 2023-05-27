#include <stdio.h>
#include <stdlib.h>

typedef int **matriz;

matriz reservaMatriz(int, int);
void inicializacion(matriz *, int, int);
void posMul3(matriz, int, int);
void liberar(matriz *, int);

int main()
{
    int n, m;
    matriz md;
    printf("Ingrese numero n: ");
    scanf("%d", &n);
    printf("Ingrese numero m: ");
    scanf("%d", &m);
    md = reservaMatriz(n, m);
    inicializacion(&md, n, m);
    posMul3(md, n, m);
    liberar(&md, n);
    return 0;
}

matriz reservaMatriz(int n, int m)
{
    int **aux, i, j;
    aux = (int **)calloc(n, sizeof(int *));
    for (i = 0; i < m; i++)
    {
        aux[i] = (int *)malloc(sizeof(int));
    }
    return aux;
}

void inicializacion(matriz *md, int n, int m)
{
    matriz aux = *md;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &aux[i][j]);
        }
        printf("\n");
    }
}

void posMul3(matriz md, int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (!(md[i][j] % 3))
                printf("La posicion [%d][%d] tiene un multiplo de 3\n", i + 1, j + 1);
        }
    }
}

void liberar(matriz *md, int n)
{
    matriz aux = *md;
    int i;
    for (i = 0; i < n; i++)
    {
        free(aux[i]);
    }
    free(aux);
}