#include "diccionario.h"
int main()
{
    dic diccionary;
    diccionary = crearDiccionario();
    agregarPalabra(&diccionary, "hola");
    agregarPalabra(&diccionary, "matematica");
    agregarPalabra(&diccionary, "fisica");
    agregarPalabra(&diccionary, "quimica");
    mostrarDic(diccionary);

    eliminarPalabra(&diccionary, "fisica");
    mostrarDic(diccionary);
}