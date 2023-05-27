#include <stdio.h>
typedef struct pun3D
{
    float x;
    float y;
    float z;
} punto3D;

int main()
{
    punto3D p[4];
    int i;
    /*for (i = 0; i < 4; i++)
    {
        printf("%d", sizeof(p[i]));
    }*/
    printf("%d", sizeof(p));

    return 0;
}