#include <stdio.h>
#include "istack.h"

int main()
{
    int n;
    stack pila;
    pila = s_create();
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    while (n != 0)
    {
        // printf("Pase por aca");
        s_push(&pila, n);
        printf("Ingrese un numero: ");
        scanf("%d", &n);
    }
    // printf("Pase por aca");
    while (pila != NULL)
    {
        printf("Numero desapilado: %d\n", s_pop(&pila));
    }
    return 0;
}