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
void borrarMultiplos(lista *, int);

int main()
{
    lista l;
    int n;
    l = inicializar();
    do
    {
        printf("Ingrese un numero ");
        scanf("%d", &n);
        agregarFinal(&l, n);
    } while (n != 0 && n > 0);
    printf("Ingrese un numero para saber si es multiplo: ");
    scanf("%d", &n);
    borrarMultiplos(&l, n);
    imprimir(l);
    free(l);
    return 0;
}

void imprimir(lista l)
{
    while (l != NULL)
    {
        printf("%d", l->dato);
        if (l->sig != NULL)
        {
            printf("->");
        }
        l = l->sig;
    }
}

lista inicializar()
{
    lista l = NULL;
    return l;
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

void borrarMultiplos(lista *ptr, int n)
{
    lista curr = *ptr;
    lista ant = *ptr;
    lista aux = *ptr;
    while (curr != NULL)
    {
        if (!(curr->dato % n) && curr->dato != 0)
        {
            ant->sig = curr->sig;
            aux = curr->sig;
            free(curr);
            curr = aux;
        }
        else
        {
            ant = aux;
            aux = aux->sig;
            curr = aux;
        }
    }
}