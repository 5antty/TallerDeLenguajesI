#include <stdio.h>
#include <stdlib.h>

double *reserva(int n);
void inicializar(double *arreglo, int n);
double promedio(double *a, int n);
void liberar(double *a, int n);

int main()
{
    int n;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    double *arreglo = reserva(n);
    inicializar(arreglo, n);
    printf("El promedio de los numeros ingresados es: %lf", promedio(arreglo, n));
    liberar(arreglo, n);
    return 0;
}

double *reserva(int n)
{
    double *nue;
    nue = (double *)calloc(n, sizeof(double));
    return nue;
}
void inicializar(double *arreglo, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Ingrese un numero ");
        scanf("%lf", &arreglo[i]);
    }
}
double promedio(double *a, int n)
{
    int i;
    double total = 0;
    for (i = 0; i < n; i++)
    {
        total += a[i];
    }
    return (double)total / n;
}
void liberar(double *a, int n)
{
    free(a);
}