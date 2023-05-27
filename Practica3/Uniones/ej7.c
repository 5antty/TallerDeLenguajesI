#include <stdio.h>
#include <string.h>
typedef struct
{
    char Apellido[50];
    char Nombres[50];
    int Legajo;
    unsigned char id : 1;
    union
    {
        int DNI;
        char *Pasaporte[10];
    };

} Alumno;

void LeerAlumno(Alumno *);
void imprimirAlumno(const Alumno);

int main()
{
    Alumno a;
    LeerAlumno(&a);
    imprimirAlumno(a);
    return 0;
}

void LeerAlumno(Alumno *a)
{
    int aux;
    printf("Ingrese Apellido: \n");
    gets(a->Apellido);
    // scanf("%s", a->Apellido);
    printf("Ingrese Nombres: \n");
    gets(a->Nombres);
    // scanf("%s", a->Nombres);
    printf("Ingrese Legajo: \n");
    scanf("%d", &(a->Legajo));
    printf("Ingrese 0 si la identificacion es dni, o 1 si es pasaporte:\n");
    scanf("%d", &aux);
    a->id = aux;
    switch (a->id)
    {
    case 0:
        printf("Ingrese dni:\n");
        scanf("%d", &(a->DNI));
        break;

    case 1:
        printf("Ingrese pasaporte:\n");
        scanf("%s", a->Pasaporte);
        break;
    }
}

void imprimirAlumno(const Alumno a)
{
    printf("%s, %s %d ", a.Apellido, a.Nombres, a.Legajo);
    switch (a.id)
    {
    case 0:
        printf("%d", a.DNI);
        break;

    case 1:
        printf("%s", a.Pasaporte);
        break;
    }
}
