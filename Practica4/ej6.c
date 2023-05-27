#include <stdio.h>
#include <stdlib.h>

struct n
{
    int dato;
    struct n *sig;
};
typedef struct n nodo;
typedef nodo *lista;

void imprimir(lista);
lista inicializar();
void eliminarTodo(lista);
void agregarAdelante(lista *, int);
void agregarFinal(lista *, int);
int tamanio(lista);

int main()
{
    lista l;
    l = inicializar();
    agregarFinal(&l, 5);
    agregarFinal(&l, 3);
    agregarFinal(&l, 7);
    imprimir(l);
    printf("El tamanio de la lista es: %d", tamanio(l));
    free(l);
    return 0;
}

void imprimir(lista lista)
{
    while (lista != NULL)
    {
        printf("%d", lista->dato);
        if (lista->sig != NULL)
        {
            printf("->");
        }
        lista = lista->sig;
    }
}

lista inicializar()
{
    lista lista = NULL;
    return lista;
}

void eliminarTodo(lista l)
{
    lista aux = l;
    while (aux != NULL)
    {
        free(aux);
        aux = aux->sig;
    }
}

void agregarAdelante(lista *l, int dato)
{
    lista nuevo = (lista)malloc(sizeof(nodo));
    nuevo->dato = dato;
    nuevo->sig = *l;
    *l = nuevo;
}

void agregarFinal(lista *l, int dato)
{
    lista aux = *l;
    lista nuevo = (lista)malloc(sizeof(nodo));
    nuevo->dato = dato;
    nuevo->sig = NULL;

    if (*l == NULL)
    {
        *l = nuevo;
    }
    else
    {
        while (aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}

int tamanio(lista l)
{
    lista aux = l;
    int t = 0;
    while (aux != NULL)
    {
        t++;
        aux = aux->sig;
    }
    return t;
}