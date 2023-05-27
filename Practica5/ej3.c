/*Se desea leer y procesar información de precipitaciones del mes de enero. Para ello se dispone de un
archivo de texto (llamado precipitaciones.txt) con el siguiente formato:
0-2-0-0-7-22-11-0- . . . -0-
Por cada de los 31 días se tiene un número entero indicando los milímetros llovidos, seguido de un
guión medio (-) como delimitador. Escriba un programa que lea la información del archivo y
derermine el día con mayor precipitación. Para evaluar el programa, genere un archivo con el
formato establecido utilizando un editor de texto plano (por ejemplo: Bloc de notas o Notepad++).
Nota: puede utilizar la función fscanf para procesar cada valor de precipitación*/

#include <stdio.h>

int main()
{
    FILE *f;
    int max = -1, n, d = 1, dmax;
    f = fopen("precipitaciones.txt", "r");
    if (f == NULL)
    {
        return 1;
    }

    fscanf(f, "%d-", &n);
    while (!feof(f))
    {
        if (n > max)
        {
            max = n;
            dmax = d;
        }
        d++;
        fscanf(f, "%d-", &n);
    }

    printf("El dia con mayor precipitacion es: %d", dmax);

    return 0;
}