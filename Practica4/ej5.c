#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *cadena;
    cadena = reservaMem(100);

    return 0;
}

char *reservaMem(int n)
{
    char *p;
    p = (char *)calloc(n, sizeof(char));
}