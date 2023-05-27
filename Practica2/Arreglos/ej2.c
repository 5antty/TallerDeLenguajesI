
#include <stdio.h>
#define CANT 5

float Prom(const float[], int);
float MinV(const float[], int);
int PosMax(const float[], int);
int main()
{
    float v[CANT] = {33.3, 4.3, 54.2, 23.34, 12.4};

    printf("El promedio de los valores del vector es: %.2f\n", Prom(v, CANT));
    printf("El minimo valor del vector es: %.2f\n", MinV(v, CANT));
    printf("La posicion del maximo valor del vector es: %d", PosMax(v, CANT));
    return 0;
}

float Prom(const float v[], int cant)
{
    int j;
    float tot = 0;
    for (j = 0; j < cant; j++)
    {
        tot += v[j];
    }
    return tot / cant;
}

float MinV(const float v[], int cant)
{
    int j;
    float m = 99999;
    for (j = 0; j < cant; j++)
    {
        if (v[j] < m)
            m = v[j];
    }
    return m;
}

int PosMax(const float v[], int cant)
{
    int j, pos;
    float max = -9999;
    for (j = 0; j < cant; j++)
    {
        if (v[j] > max)
        {
            max = v[j];
            pos = j;
        }
    }
    return pos;
}
