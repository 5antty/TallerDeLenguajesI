#include <stdio.h>
#include <stdlib.h>

float *reservaMem(int n);
void incializacion(float *a, int n);
float Promedio(float *a, int n);

int main()
{
    int n, i;
    float *arreglo;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    arreglo = reservaMem(n);
    incializacion(arreglo, n);
    printf("El promedio es: %.2f", Promedio(arreglo, n));
    return 0;
}

float *reservaMem(int n)
{
    float *p;
    p = (float *)calloc(n, sizeof(float));
}

void incializacion(float *a, int n)
{
    int i;
    float num;
    for (i = 0; i < n; i++)
    {
        printf("Ingrese numero ");
        scanf("%f", &num);
        a[i] = num;
    }
}

float Promedio(float *a, int n)
{
    int i;
    float total = 0;
    for (i = 0; i < n; i++)
    {
        total += a[i];
    }
    return (float)total / n;
}