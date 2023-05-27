#include <stdio.h>
char *strCopy(char *, char *);
int main()
{
    char s[] = "Santiago", f[] = "Villagra";
    printf("La cadena copiada es %s\n", strCopy(s, f));
    printf("%s, %s", s, f);
    return 0;
}
char *strCopy(char *p1, char *p2)
{
    char *aux1 = p1, *aux2 = p2;
    while (*aux2 != '\0')
    {
        *aux1 = *aux2;
        aux1++;
        aux2++;
    }
    *aux1 = *aux2;
    return p1;
}