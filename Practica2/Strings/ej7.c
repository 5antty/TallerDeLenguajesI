#include <stdio.h>
#include <string.h>
int Palindroma(char *);
int main()
{
    char s[] = "neuquen";
    !Palindroma(s) ? printf("Es palindroma") : printf("No es palindroma");
    return 0;
}
int Palindroma(char *p)
{
    int i;
    char *aux = p, *auxinv;
    while (*aux != '\0')
    {
        aux++;
    }
    char fin = *aux;
    aux--;
    /*while (*aux != *p)
    {
        *auxinv = *aux;
        auxinv++;
        aux--;
    }*/
    for (i = 0; i < strlen(p); i++)
    {
        auxinv[i] = *aux;
        aux--;
    }
    auxinv[i] = fin;
    printf("%s", auxinv);
    if (strcmp(p, auxinv))
        return 1;
    return 0;
}