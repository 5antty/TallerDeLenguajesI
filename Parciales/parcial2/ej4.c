#include <stdio.h>
#include <stdlib.h>
#define cant_materias 50

typedef struct al
{
    unsigned int cod_materia : 6;
    int cod_alumno;
} alumno;

struct l
{
    alumno inscripcion;
    struct l *sig;
};
typedef struct l *lista_inscrip;

int main()
{
    return 0;
}

void informarInscripciones(lista_inscrip list)
{
    int i, *materias = calloc(cant_materias, sizeof(int));
    while (list != NULL)
    {
        materias[list->inscripcion.cod_materia]++;
        list = list->sig;
    }
    for (i = 0; i < cant_materias; i++)
    {
        printf("La materia %d tiene %d alumnos", i, materias[i]);
    }
}