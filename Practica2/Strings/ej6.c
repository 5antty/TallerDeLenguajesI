#include <stdio.h>
#include <string.h>
void carEnCadena(char *);
int main()
{
    char s[100];
    printf("Ingrese una cadena\n");
    scanf("%s", s);
    carEnCadena(s);
    return 0;
}
void carEnCadena(char *p)
{
    char * aux=p;
    int letras['z' - 'a']={0}, i, j;
    while (*aux != '\0')
    {
        for (i = 'a', j=0; i < 'z'; i++, j++)
        {
            if (*aux == i)
            {
                letras[j]++;
            }
        }
        aux++;
    }
    for (i = 'a', j=0; i < 'z'; i++, j++)
    {
        if (letras[j] != 0)
        {
            printf("La cantidad de letras %c, es %d\n", i, letras[j]);
        }
    }
}
