#include <stdio.h>
#define CANT 3
typedef struct
{
    float base;
    float altura;
} rectangulo;
;

void inicializar(rectangulo *);
float areaRec(rectangulo);
int main()
{
    rectangulo r[CANT];
    int i, min = 9999, tmin;
    ;

    for (i = 0; i < CANT; i++)
    {
        inicializar(&r[i]);
        /// printf("El area del rectangulo es %.2f", areaRec(r[i]));
        if (areaRec(r[i]) < min)
            min = areaRec(r[i]);
        tmin = i;
    }
    printf("El triangulo con menor area es %d", tmin + 1);
    return 0;
}
void inicializar(rectangulo *r)
{
    printf("Ingrese la base ");
    scanf("%f", &(r->base));
    printf("Ingrese la altura ");
    scanf("%f", &(r->altura));
}

float areaRec(rectangulo r)
{
    /// printf("%f", (r.altura * r.base / 2));
    return (r.altura * r.base / 2);
}