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
lista invertir(lista l);

int main()
{
    lista l, inv;
    int n;
    l = inicializar();
    do
    {
        printf("Ingrese un numero ");
        scanf("%d", &n);
        agregarFinal(&l, n);
    } while (n != 0 && n > 0);
    inv = invertir(l);
    printf("Lista inicial con %d elementos\n", tamanio(l));
    imprimir(l);
    printf("\nLista invertida con %d elementos\n", tamanio(inv));
    imprimir(inv);

    free(inv);
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

lista invertir(lista l)
{
    lista inv, aux = l;
    inv = inicializar();
    while (aux != NULL)
    {
        agregarAdelante(&inv, aux->dato);
        aux = aux->sig;
    }
    return inv;
}