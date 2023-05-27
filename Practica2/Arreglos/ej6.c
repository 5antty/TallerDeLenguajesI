#include <stdio.h>
#define COL 5
void cantDig(int[], int);
int main()
{
    int v[] = {3, 4, 1, 4, 5};
    cantDig(v, COL);
    return 0;
}
/*int cantDigitos(int n)
{
    int d = n % 10;
}*/
void cantDig(int v[], int col)
{
    int i, j, d[10] = {0};
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (j == v[i])
            {
                d[j]++;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("La cantidad de veces que aparece el digito %d es %d\n", i, d[i]);
    }
}