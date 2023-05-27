#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 2

typedef struct
{
    char nombre[30];
    char apellido[30];
    int edad;
    int titulos;
    int ranking;
    float fortuna;
} jugador;

// Prototipos
void cargarJugador(jugador *j);
void imprimir(jugador j);
void jMejorRank(jugador *j, int cant);
void jMasTitulos(jugador *j, int cant);

int main()
{
    int i;
    jugador j[CANT], aux[CANT];
    for (i = 0; i < CANT; i++)
    {
        cargarJugador(&j[i]);
    }
    printf("Vector cargado\n");

    FILE *arch = fopen("tenis.dat", "wb+");
    if (arch == NULL)
        return 1;
    fwrite(j, sizeof(jugador), CANT, arch);
    printf("Se copio el vector de estructura al archivo\n");

    fseek(arch, 0, SEEK_SET);
    fread(aux, sizeof(jugador), CANT, arch);

    jMejorRank(j, CANT);
    jMasTitulos(j, CANT);

    printf("%d", sizeof(arch));

    fclose(arch);
    return 0;
}

void cargarJugador(jugador *j)
{
    jugador aux;
    char *aux2 = calloc(20, sizeof(char));
    printf("Ingrese el nombre del jugador: ");
    scanf("%s", aux2);
    strcpy(aux.nombre, aux2);
    printf("Ingrese el apellido del jugador: ");
    scanf("%s", aux2);
    strcpy(aux.apellido, aux2);
    printf("Ingrese edad: ");
    scanf("%d", &(aux.edad));
    printf("Ingrese titulos: ");
    scanf("%d", &(aux.titulos));
    printf("Ingrese ranking: ");
    scanf("%d", &(aux.ranking));
    printf("Ingrese fortuna: ");
    scanf("%f", &(aux.fortuna));
    *j = aux;
}

void imprimir(jugador j)
{
    printf("Nombre = %s\n", j.nombre);
    printf("Apellido = %s\n", j.apellido);
    printf("Edad = %d\n", j.edad);
    printf("Titulos = %d\n", j.titulos);
    printf("Ranking = %d\n", j.ranking);
    printf("Fortuna = %.2f\n", j.fortuna);
}

void jMejorRank(jugador *j, int cant)
{
    char *nom, *ap;
    int max = 9999, i;
    for (i = 0; i < cant; i++)
    {
        if (j[i].ranking < max)
        {
            max = j[i].ranking;
            nom = j[i].nombre;
            ap = j[i].apellido;
        }
    }
    printf("El jugador con mejor ranking es: %s %s\n", nom, ap);
}

void jMasTitulos(jugador *j, int cant)
{
    char *nom, *ap;
    int max = -1, i;
    for (i = 0; i < cant; i++)
    {
        if (j[i].titulos > max)
        {
            max = j[i].titulos;
            nom = j[i].nombre;
            ap = j[i].apellido;
        }
    }
    printf("El jugador con mas titulos es: %s %s\n", nom, ap);
}