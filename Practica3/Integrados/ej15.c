#include <stdio.h>
#include <math.h>
#define PI 3.14

typedef struct
{
    double radio;
} Circulo;

typedef struct
{
    double radio1;
    double radio2;
} Elipse;

typedef struct
{
    double base;
    double alt;
} Triangulo;

typedef struct
{
    double lado;
} Cuadrado;

typedef struct
{
    double base;
    double altura;
} Rectangulo;

typedef struct
{
    unsigned char tipo : 3;
    union
    {
        Circulo c;
        Elipse e;
        Triangulo t;
        Cuadrado s;
        Rectangulo r;
    };

} Figura;

double Area(Figura f);
int main()
{
    Figura circ;
    circ.tipo = 0;
    circ.c.radio = 3;
    printf("%d", Area(circ));
    return 0;
}

double Area(Figura f)
{
    double area = 0;
    switch (f.tipo)
    {
    case 0:
        area = PI * pow(f.c.radio, 2);
        break;
    case 1:
        area = PI * f.e.radio1 * f.e.radio2;
        break;
    case 2:
        area = f.t.base * f.t.alt / 2;
        break;
    case 3:
        area = pow(f.s.lado, 2);
        break;
    case 4:
        area = f.r.base * f.r.altura;
        break;
    default:
        printf("Ingreso una figura incorrecta");
        break;
    }

    return area;
}