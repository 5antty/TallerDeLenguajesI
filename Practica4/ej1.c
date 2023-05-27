#include <stdio.h>
#include <stdlib.h>
void f(int *p);
int main()
{
    int *ptr = NULL;
    f(ptr);
    if (ptr == NULL)
        printf("ptr es NULL\n");
    else
        printf("ptr no es NULL\n");
    return 0;
}
void f(int *p)
{
    p = (int *)malloc(10 * sizeof(int));
}
// Ponerle a la estructura nodo, y al puntero lo llamo lista