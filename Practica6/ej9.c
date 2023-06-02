#include <stdio.h>
#include "imath.h"

int main()
{
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    while (num != 0)
    {
        if (par(num))
        {
            printf("El cuadrado del numero par %d es %d\n", num, cuadrado(num));
            printf("El cubo del numero par %d es %d\n", num, cubo(num));
        }
        else
            printf("El factorial del numero impar %d es %d\n", num, factorial(num));
        printf("Ingrese un numero: ");
        scanf("%d", &num);
    }

    return 0;
}