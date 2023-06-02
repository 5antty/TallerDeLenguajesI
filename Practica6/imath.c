#include "imath.h"

int potencia(int x, int y) // Eleva x a la y - ésima potencia.
{
    int i, res = 1;

    for (i = 0; i < y; i++)
    {
        res *= x;
    }
    return res;
}
int cuadrado(int x) // Eleva x al cuadrado.
{
    return x * x;
}
int cubo(int x) // Eleva x al cubo.
{
    return x * x * x;
}
int absoluto(int i) // Retorna el valor absoluto entero de i.e.
{
    if (i < 0)
        return (-1) * i;
    return i;
}
int factorial(int i) // Retorna el factorial de i.f.
{
    if (i <= 1)
        return 1;
    else
        return i * factorial(i - 1);
}
int sumatoria(int i) // Retorna la sumatoria de 0 hasta i.g.
{
    int j;
    for (j = 0; j <= i; j++)
    {
    }
    return j;
}
int multiplo(int x, int y); // Retorna 1 si y es divisor de x, 0 en otro caso.h.
int divisor(int x, int y);  // Retorna 1 si y es múltiplo de x, 0 en otro caso.i.
int par(int i)              // Retorna 1 si i es par, 0 en otro caso.j.
{
    return !(i % 2);
}
int impar(int i) // Retorna 1 si i es impar, 0 en otro caso.
{
    return (i % 2);
}