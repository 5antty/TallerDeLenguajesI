#include <stdio.h>
#define ON 255
#define OFF 0
typedef enum
{
    Bluetooth = 128,
    Wifi = 64,
    GPS = 32,
    Datos = 16,
    Frontal = 8,
    Trasera = 4,
    Linterna = 2,
    Vibrar = 1,
} modulos;

int main()
{
    modulos telefono;
    telefono = OFF;
    printf("%d\n", telefono);
    telefono |= Wifi;
    /*telefono |= Wifi;
    telefono ^= Trasera;*/
    printf("%d\n", telefono);
    /*telefono = ~telefono;
    printf("%d\n", telefono);*/
    telefono &= Wifi;
    printf("%d\n", telefono);
    return 0;
}
