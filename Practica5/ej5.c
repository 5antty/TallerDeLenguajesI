/*Escriba un programa que permita a un usuario consultar si un conjunto de palabras existe o no en
un diccionario. El usuario ingresa de a una palabra y la consulta finaliza cuando ingresa la palabra
“ZZZ”. Para cada palabra ingresada se debe informar si la misma pertenece o no al diccionario.
El diccionario consiste en un archivo de texto y las palabras se encuentran ordenadas en forma
ascendente (una por línea). Se desea generar una estructura de datos dinámica (memoria RAM) en
la cual se almacenen las palabras de todo el diccionario. Luego, verifique la pertenencia de las
palabras ingresadas por el usuario utilizando dicha estructura en lugar del archivo. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define long 20
struct n
{
    char dato[long];
    struct n *sig;
};
typedef struct n nodo;
typedef nodo *lista;

void imprimir(lista);
void agregarFinal(lista *, char *);
int pertenece(lista, char *);

int main()
{
    FILE *f = fopen("diccionario.txt", "r");
    lista l;
    char pal1[long], pal2[long];

    if (f == NULL)
        return 1;
    fscanf(f, "%s", pal1);
    // fgets(pal1, long, f);
    while (!feof(f))
    {
        agregarFinal(&l, pal1);
        // fgets(pal1, long, f);
        fscanf(f, "%s", pal1);
    }
    imprimir(l);

    printf("\n");
    printf("Ingrese una palabra para ver si esta en el diccionario: ");
    gets(pal2);
    while (strcmp(pal2, "ZZZ"))
    {
        if (pertenece(l, pal2))
            printf("\nLa palabra si existe en el diccionario");
        else
            printf("\nLa palabra no existe en el diccionario");
        printf("\nIngrese la siguiente palabra: ");
        gets(pal2);
    }
    free(l);
    fclose(f);
    return 0;
}

void imprimir(lista l)
{
    while (l != NULL)
    {
        printf("%s", l->dato);
        if (l->sig != NULL)
        {
            printf("->");
        }
        l = l->sig;
    }
}

void agregarFinal(lista *l, char *cadena)
{
    lista aux = *l;
    lista nuevo = (lista)malloc(sizeof(nodo));
    strcpy(nuevo->dato, cadena);
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

int pertenece(lista l, char *p)
{
    int per = 0;
    while (l != NULL)
    {
        if (!strcmp(l->dato, p))
        {
            per = 1;
            return per;
        }
        l = l->sig;
    }
    return per;
}