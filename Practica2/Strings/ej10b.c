#include <stdio.h>
#include <string.h>
void lowerStr(char *);
int esMay(int);
int main()
{
    char s[] = "SantIAGO";
    lowerStr(s);
    printf("%s", s);
    return 0;
}
void lowerStr(char *p)
{
    char *aux = p;
    int i;
    while (*aux != '\0')
    {
        if (esMay(*aux))
            *aux += 32;
        aux++;
    }
}
int esMay(int a)
{
    if (a >= 'A' && a <= 'Z')
        return 1;
    return 0;
}