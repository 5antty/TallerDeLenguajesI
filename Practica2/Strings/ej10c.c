#include <stdio.h>
char *numToStr(char *, int);
int main()
{
    char s[10];
    int i = 412;
    printf("El numero %d, en cadena es %s", i, numToStr(s, i));
    return 0;
}
char *numToStr(char *p, int n)
{
    int d, inv, i = 0;
    while (n != 0)
    {
        d = n % 10;
        inv = (inv * 10) + d;
        n /= 10;
    }
    while (inv != 0)
    {
        d = inv % 10;
        p[i] = d + 48;
        inv /= 10;
        i++;
    }
    p[i] = '\0';
    return p;
}