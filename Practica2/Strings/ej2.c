#include <stdio.h>
#include <string.h>
#define CANT 100
char ultimoCaracter(const char[], int);
int main()
{

    char cadena[CANT];
    int cont;
    printf("Ingrese una cadena de caracteres\n");
    scanf("%s", cadena);
    while (strcmp(cadena, "XXX"))
    {
        printf("Ingrese una cadena de caracteres\n");
        scanf("%s", cadena);
        if (ultimoCaracter(cadena, CANT) == 'o')
        {
            cont++;
        }
    }
    printf("Las palabras ingresadas que terminan con una 'o' son %d", cont);

    return 0;
}
char ultimoCaracter(const char s[], int cant)
{
    int i;
    for (i = 0; i < cant; i++)
    {
        if (s[i] == '\0')
            return s[i - 1];
    }
}