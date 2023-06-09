#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        fprintf(stdout, "Error, no se ingreso al menos un numero");
    }
    else
    {
        int i, total = 0;
        for (i = 1; i <= argc; i++)
        {
            total += atoi(argv[i]);
        }
        printf("El promedio de los numero pasados al main es: %.2f", (float)total / (argc - 1));
    }
}