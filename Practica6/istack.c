#include "istack.h"

stack s_create()
{
    stack nuevo = NULL;
    return nuevo;
}

int s_push(stack *s, int n) // Apila n en s. Retorna el elemento apilado.
{
    stack nuevo = (stack)malloc(sizeof(nodo));
    nuevo->dato = n;
    nuevo->sig = *s;
    *s = nuevo;
    return n;
}
int s_pop(stack *s) // Desapila un elemento de s.
{
    int aux2 = (*s)->dato;
    stack act = *s;
    stack ant = *s;
    stack aux = *s;
    ant->sig = act->sig;
    aux = act->sig;
    free(act);
    act = aux;
    *s = act;
    return aux2;
}
int s_top(stack s) // Retorna el próximo elemento que será desapilado.
{
    return s->dato;
}
int s_empty(stack s) // Retorna 1 si s está vacía, 0 en caso contrario.
{
    return (s == NULL) ? 1 : 0;
}
int s_length(stack s) // Retorna la cantidad de elementos apilados en s.
{
    int length = 0;
    while (s != NULL)
    {
        length++;
        s = s->sig;
    }
    return length;
}