#include <stdio.h>
typedef struct
{
    unsigned char Bluetooth : 1;
    unsigned char Wifi : 1;
    unsigned char GPS : 1;
    unsigned char Datos : 1;
    unsigned char Frontal : 1;
    unsigned char Trasera : 1;
    unsigned char Linterna : 1;
    unsigned char Vibrar : 1;
} movil;

int main()
{
    movil telefono = {0, 0, 0, 0, 0, 0, 0, 0};
    telefono.Wifi = 1;                 // Activa el modulo wifi
    telefono.Wifi = 0;                 // Desactiva el modulo wifi
    telefono.Wifi = !telefono.Wifi;    // Invertir bit
    telefono.Wifi = telefono.Wifi & 1; // Compuebo si el bit es 1
    return 0;
}