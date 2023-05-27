#include <stdio.h>

typedef struct
{
    unsigned int red : 8;
    unsigned int green : 8;
    unsigned int blue : 8;
} RGB24;

typedef struct
{
    unsigned int red : 5;
    unsigned int green : 6;
    unsigned int blue : 5;
} RGB16;

RGB16 convertirRGB24(RGB24 r);
RGB24 convertirRGB16(RGB16 r);

int main()
{
    RGB16 r1 = {24, 56, 30}, aux1;
    RGB24 r2 = {255, 234, 128}, aux2;
    aux2 = convertirRGB16(r1);
    printf("Color rgb24 %u,%u,%u\n", aux2.red, aux2.green, aux2.blue);
    aux1 = convertirRGB24(r2);
    printf("Color rgb16 %u,%u,%u\n", aux1.red, aux1.green, aux1.blue);
    return 0;
}
RGB16 convertirRGB24(RGB24 r)
{
    RGB16 aux;
    aux.red = r.red * 31 / 255; // r.red >> 3;
    aux.green = r.green * 31 / 255;
    aux.blue = r.blue * 31 / 255;
    return aux;
}

RGB24 convertirRGB16(RGB16 r)
{
    RGB24 aux;
    aux.red = r.red * 255 / 31;
    aux.green = r.green * 255 / 31;
    aux.blue = r.blue * 255 / 31;
    return aux;
}