#include <stdio.h>
int main()
{
    FILE *arch = fopen("tenis.dat", "rb");
    if (arch == NULL)
        return 1;

    return 0;
}

int actualizarRank(char *nom, char *ap, int newRank)
{
}