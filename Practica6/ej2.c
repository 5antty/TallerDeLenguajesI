#include <stdio.h>
#include <stdlib.h>

float promedio(char **v, int c);
int main(int c, char **v)
{
    // printf("%d", c);
    if (c < 4)
    {
        printf("No se pasaron los 4 numeros");
    }

    else
        printf("El promedio es: %.2f", promedio(v, c));
    return 0;
}

float promedio(char **v, int c)
{
    float total = 0;
    int i;
    for (i = 1; i <= c; i++)
    {
        total += atoi(v[i]);
    }
    return (float)total / (c - 1);
}