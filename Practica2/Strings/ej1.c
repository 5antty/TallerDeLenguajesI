#include <stdio.h>
#include <string.h>
int main()
{

    char cadena[100];
    int cont;
    printf("Ingrese una cadena de caracteres\n");
    scanf("%s", cadena);
    while (strcmp(cadena, "ZZZ"))
    {
        printf("Ingrese una cadena de caracteres\n");
        scanf("%s", cadena);
        if (strlen(cadena) == 5)
        {
            cont++;
        }
    }
    printf("Las palabras ingresadas de longitud 5 son %d", cont);

    return 0;
}
