#include <stdio.h>
#include <string.h>
void upperStr(char *);
int esMin(int);
int main()
{
    char s[] = "Santiago";
    upperStr(s);
    printf("%s", s);
    return 0;
}
void upperStr(char *p)
{
    char *aux = p;
    int i;
    while (*aux != '\0')
    {
        if (esMin(*aux))
            *aux -= 32;
        aux++;
    }
}
int esMin(int a)
{
    if (a >= 'a' && a <= 'z')
        return 1;
    return 0;
}