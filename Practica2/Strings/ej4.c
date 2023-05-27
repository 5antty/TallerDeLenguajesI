#include <stdio.h>
int strlenprop(char *);
int main()
{
    char s[] = "Santiago";
    printf("La cantidad de caracteres de %s es %d", s, strlenprop(s));
    return 0;
}
int strlenprop(char *p)
{
    int cont = 0;
    char *aux = p;
    while (*aux != '\0')
    {
        cont++;
        aux++;
    }
    return cont;
}