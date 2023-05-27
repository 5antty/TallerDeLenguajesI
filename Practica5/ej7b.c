#include <stdio.h>
#define LONG 50
int main()
{
    char c[LONG], *nom1 = "prueba.txt", *nom2 = "prueba2.txt";
    FILE *f1 = fopen(nom1, "r");
    if (f1 == NULL)
        return 1;
    FILE *f2 = fopen(nom2, "w");
    if (f2 == NULL)
        return 2;
    fgets(c, LONG, f1);
    while (!feof(f1))
    {
        fputs(c, f2);
        fgets(c, LONG, f1);
    }
    fputs(c, f2);
    fprintf(stdout, "Contenido copiado de %s a %s", nom1, nom2);
    fclose(f1);
    fclose(f2);
    return 0;
}