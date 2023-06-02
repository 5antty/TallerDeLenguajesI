#include <stdio.h>
#include <stdlib.h>

int main(int c, char **v)
{
    if (c < 3)
        return 0;
    int n1 = atoi(v[1]), n2 = atoi(v[2]);

    switch (v[3][0])
    {
    case '+':
        printf("La suma es: %d", n1 + n2);
        break;
    case '-':
        printf("La resta es: %d", n1 - n2);
        break;
    case '*':
        printf("El producto es: %d", n1 * n2);
        break;
    case '/':
        printf("El cociente es: %d", n1 / n2);
        break;
    default:
        break;
    }
    return 0;
}