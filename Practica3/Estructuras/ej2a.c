#include <stdio.h>
#include <string.h>
#define CANT 3
typedef struct
{
    char calle[50];
    char ciudad[30];
    int codigo_postal;
    char pais[40];
} direccion;
struct alu
{
    char apellido[50];
    char nombre[30];
    int legajo[8];
    float promedio;
    direccion domicilio;
};
typedef struct alu alumno;

void inicializarAlumno(alumno *);
void inicializarDireccion(direccion *);
int main()
{
    alumno a[CANT];
    int i;
    float mejorProm = -1;
    char *nom, *ap;
    for (i = 0; i < CANT; i++)
    {
        inicializarAlumno(&a[i]);
        if (a[i].promedio > mejorProm)
        {
            mejorProm = a[i].promedio;
            nom = a[i].apellido;
            ap = a[i].nombre;
        }
    }
    printf("El mejor promedio lo tiene: %s %s", nom, ap);

    return 0;
}
void inicializarAlumno(alumno *a)
{
    printf("Ingrese el apellido ");
    scanf("%s", a->apellido);
    printf("Ingrese el nombre ");
    scanf("%s", a->nombre);
    printf("Ingrese el legajo ");
    scanf("%d", &(a->legajo));
    printf("Ingrese el promedio ");
    scanf("%f", &(a->promedio));
    /// inicializarDireccion(&(a->domicilio));
}
void inicializarDireccion(direccion *d)
{
    printf("Ingrese la calle ");
    scanf("%s", d->calle);
    printf("Ingrese la ciudad ");
    scanf("%s", d->ciudad);
    printf("Ingrese el codigo postal ");
    scanf("%d", &(d->codigo_postal));
    printf("Ingrese el pais ");
    scanf("%s", d->pais);
}