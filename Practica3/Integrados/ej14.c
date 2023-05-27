#include <stdio.h>

typedef enum
{
    oro,
    copa,
    basto,
    espada
} palos;

typedef struct
{
    palos p;
    unsigned char num : 4;
} carta;

int main()
{
    return 0;
}

void imprimirCarta(carta c)
{
    char *nompalos = {"Oro", "Copa", "Basto", "Espada"};
    printf("Numero: %d", c.num);
    printf("Palo: %s", nompalos[c.p]);
}