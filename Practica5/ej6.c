#include <stdio.h>
#include <stdlib.h>
#define LONG 255
#define COL 8
int main()
{
    FILE *f1 = fopen("vinos.csv", "r");
    if (f1 == NULL)
        return 1;
    char titulo[LONG];
    int i, filas = 0;
    float nums[COL], max = -1, min = 99999;
    float *total = calloc(COL, sizeof(float));
    fgets(titulo, LONG, f1);

    FILE *f2 = fopen("resultado.csv", "w");
    if (f2 == NULL)
        return 2;
    fputs(titulo, f2);

    while (!feof(f1))
    {
        for (i = 0; i < COL; i++)
        {
            fscanf(f1, "%f;", &nums[i]);
            if (nums[i] > max)
                max = nums[i];
            if (nums[i] < min)
                min = nums[i];
            total[i] += nums[i];
        }
        filas++;
        // fgets(titulo, 500, f1);
        fscanf(f1, "%s", titulo);
    }

    // fscanf(f2, "%s;", titulo);
    for (i = 0; i < COL; i++)
    {
        fprintf(f2, "%f;", total[i] / filas);
    }

    return 0;
}