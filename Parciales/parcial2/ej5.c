#define VALOR_ABS(x, y)               \
    do                                \
    {                                 \
        (x) = ((x) > 0) ? (x) : -(x); \
        (y) = ((y) > 0) ? (y) : -(y); \
    } while (0)

#define VALOR_ABS1(x) ((x > 0) ? (x) : -(x))

#define distMAN(px, py, qx, qy) (VALOR_ABS1((px) - (qx)) + VALOR_ABS1((py) - (qy)))

#include <stdio.h>
int main()
{
    int px = 1, py = 4, qx = 3, qy = 5;
    printf("La distancia de manhattan entre P y Q es: %d", distMAN(px, py, qx, qy));
}