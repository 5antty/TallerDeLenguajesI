#include <stdio.h>
typedef union
{
    int dia;
    int mes;
    int anio;
} fecha;
typedef struct
{
    fecha f;
    int tipo;
} ufecha;

int main()
{
    return 0;
}