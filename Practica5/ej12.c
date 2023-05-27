#include <stdio.h>
#define LONG 100
int main()
{
    FILE *arch = fopen("personas.csv", "r");
    char aux[LONG];
    if (arch == NULL)
        return 1;
    fscanf(arch, "%s", aux);
    int aux1, dni;
    char aux2[LONG];
    while (!feof(arch))
    {

        fscanf(arch, "%d;%d;%s", &aux1, &dni, &aux2);
    }

    return 0;
}
