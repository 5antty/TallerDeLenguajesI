#include <stdio.h>
#include <time.h>
typedef struct
{
    char *palo[10];
    int num;
} carta;

void Barajar(carta *, int);
carta SacarCartaX(carta *, int);

int main()
{
    carta mazo[5];
    Barajar(mazo, 5);
    return 0;
}
void Barajar(carta *m, int cant)
{
    int i;
    carta aux;
    srand(time(NULL));
    for (i = 0; i < cant; i++)
    {
        aux = m[i];
        m[i] = m[rand() % cant];
        m[rand() % cant] = aux;
    }
}
carta SacarCartaX(carta *m, int X)
{
    return m[X];
}
void imprimirCarta(carta c)
{
    printf("Numero: %d", c.num);
    printf("Palo: %s", c.palo);
}
// ej uniones estructura punto o arreglo punto