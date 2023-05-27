#include <stdio.h>
#include <string.h>
char *numToText(char *, int);
int main()
{
    char s[100];
    // char a[] = "Hola";
    // char b[] = "Mundo";
    printf("%s", numToText(s, 93));
    /*strcat(a, b);
    printf("%s", a);*/
    return 0;
}
char *numToText(char *p, int n)
{
    char *num[] = {"Cero", "Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve"};
    char *multiplos[] = {"Dieci", "Veinti", "Treinta y ", "Cuarenta y ", "Cincuenta y ", "Sesenta y ", "Setenta y ", "Ochenta y ", "Noventa y "};
    char *dig2;
    int d, inv = 0, cantDig = 0;
    if (n == 0)
    {
        p = num[0];
        return p;
    }

    d = n % 10;
    // inv = (inv * 10) + d;
    dig2 = num[d];
    if (n > 9)
    {
        n /= 10;
        d = n % 10;
        p = multiplos[d - 1];
    }
    //
    printf("%s\n", p);
    printf("%s\n", dig2);
    strcat(p, dig2);
    // cantDig++;

    /*while (inv != 0)
    {
        d = inv % 10;
        switch (cantDig)
        {
        case 1:
            p = num[d + 1];
            break;

        case 2:
            p = multiplos[d + 1];
            strcat(p, num[d + 1]);
            break;
        }
        inv /= 10;
    }*/
    return p;
}