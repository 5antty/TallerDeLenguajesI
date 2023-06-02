#ifndef diccionario
#define diccionario

#define LONG 30
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct d
{
    char palabra[LONG];
    struct d *sig;
};
typedef struct d nodo;
typedef nodo *dic;

dic crearDiccionario();
int existe(dic d, char p[LONG]);
void agregarPalabra(dic *d, char p[LONG]);
void eliminarPalabra(dic *d, char p[LONG]);
void cargarArchivo(dic *d, FILE *f);
void guardarArchivo(dic d, FILE **f);
void destruirDic(dic *d);
void mostrarDic(dic d);
#endif