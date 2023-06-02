#include "diccionario.h"

dic crearDiccionario()
{
    dic nuevo;
    nuevo = NULL;
    return nuevo;
}

int existe(dic d, char p[LONG]) // Retorna 1 si se encontro la palabra
{
    while (d != NULL)
    {
        if (!strcmp(d->palabra, p))
            return 1;
        d = d->sig;
    }
    return 0;
}

void agregarPalabra(dic *d, char p[LONG])
{
    if (!existe(*d, p))
    {
        printf("entro con %s", p);
        dic nuevo = (dic)malloc(sizeof(nodo));
        strcpy(nuevo->palabra, p);
        nuevo->sig = NULL;
        if (*d == NULL)
            *d = nuevo;
        else
        {
            dic aux = *d;
            while (aux->sig != NULL)
            {
                aux = aux->sig;
            }
            aux->sig = nuevo;
        }
    }
}

void eliminarPalabra(dic *d, char p[LONG])
{
    dic act = *d;
    dic ant = *d;
    dic aux = *d;
    while (act != NULL)
    {
        if (!strcmp(act->palabra, p))
        {
            ant->sig = act->sig;
            aux = act->sig;
            free(act);
            act = aux;
        }
        else
        {
            ant = aux;
            aux = aux->sig;
            act = aux;
        }
    }
}

void cargarArchivo(dic *d, FILE *f)
{
    char p[LONG];
    fscanf(f, "%s", p);
    while (!feof(f))
    {
        agregarPalabra(d, p);
        fscanf(f, "%s", p);
    }
}

void guardarArchivo(dic d, FILE **f)
{
    while (d != NULL)
    {
        fprintf(*f, "%s\n", d->palabra);
        d = d->sig;
    }
}

void destruirDic(dic *d)
{
    while (*d != NULL)
    {
        dic aux = *d;
        *d = (*d)->sig;
        free(aux);
    }
}

void mostrarDic(dic d)
{
    while (d != NULL)
    {
        printf("%s", d->palabra);
        d = d->sig;
    }
}