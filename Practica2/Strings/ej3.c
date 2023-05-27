#include <stdio.h>
char *reemplazo(char *, char, char);
int main()
{
    char cadena[] = "Haaland";
    printf("La cadena reemplazada quedaria %s", reemplazo(cadena, 'a', 'x'));
    return 0;
}
char *reemplazo(char *p, char a, char b)
{
    char *aux = p;
    while (*aux != '\0')
    {
        if (*aux == a)
        {
            *aux = b;
        }
        aux++;
    }
    return p;
}