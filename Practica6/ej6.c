#include <stdio.h>
#include <time.h>

#define AREA_C(r) 3.14 * (r) * (r)

int main()
{
    srand(time(NULL));
    int i;
    for (i = 0; i < 10; i++)
    {
        int r = rand() % 5;
        printf("El area del circulo con radio %d es %.2f\n", r, AREA_C(r));
    }
    return 0;
}