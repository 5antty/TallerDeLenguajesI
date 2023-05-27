#include <stdio.h>
#include <time.h>
#define CANT 10
void inicializar(int *, int);
void Imprimir(const int *, int);
void ordenar(int *, int);
int main()
{
    int v[CANT];
    inicializar(v, CANT);
    printf("Numeros desordenados\n");
    Imprimir(v, CANT);
    ordenar(v, CANT);
    printf("Numeros ordenados\n");
    Imprimir(v, CANT);
    return 0;
}
void inicializar(int *p, int cant)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < cant; i++)
    {
        p[i] = rand();
    }
}
void Imprimir(const int *p, int cant)
{
    int i;
    for (i = 0; i < cant; i++)
    {
        printf("%d ", p[i]);
    }
}
void ordenar(int *p, int cant)
{
    int i, aux, j;

    for (j = 0; j < cant; j++)
    {
        for (i = 0; i < cant - j; i++)
        {
            if (p[i] > p[i + 1])
            {
                aux = p[i];
                p[i] = p[i + 1];
                p[i + 1] = aux;
            }
        }
    }
}