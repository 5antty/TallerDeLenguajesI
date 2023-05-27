/*Escriba un programa que procese un archivo de texto e informe la cantidad de caracteres
minúsculas, mayúsculas y dígitos que posee.
*/
#include <stdio.h>

int main()
{
    char c;
    int may = 0, min = 0;
    FILE *f;
    f = fopen("prueba2.txt", "r");
    if (f == NULL)
    {
        printf("\nError al abrir archivo fuente\n");
        return 1;
    }
    c = fgetc(f);
    while (!feof(f))
    {
        if (c >= 'a' && c <= 'z')
            min++;
        if (c >= 'A' && c <= 'Z')
            may++;
        c = fgetc(f);
    }
    printf("La cantidad de mayusculas es: %d\n", may);
    printf("La cantidad de minusculas es: %d\n", min);
    return 0;
}