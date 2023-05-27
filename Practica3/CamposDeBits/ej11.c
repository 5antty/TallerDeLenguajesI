#include <stdio.h>
typedef struct
{
    unsigned int seg : 5;
    unsigned int min : 6;
    unsigned int hora : 5;
} horario;

void leerHora(horario *);
void imprimir(horario);
int main()
{
    horario h;
    leerHora(&h);
    imprimir(h);
    return 0;
}
void leerHora(horario *h)
{
    unsigned int aux;
    printf("Ingrese hora ");
    scanf("%u", &aux);
    h->hora = aux;
    printf("Ingrese min ");
    scanf("%u", &aux);
    h->min = aux;
    printf("Ingrese seg ");
    scanf("%u", &aux);
    h->seg = aux;
}
void imprimir(horario h)
{
    printf("La hora es %1u:%1u:%1u", h.hora, h.min, h.seg);
}