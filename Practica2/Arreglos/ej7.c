#include <stdio.h>
#define ANIOS 10
#define MESES 12
#define DIAS 30
void Lluvia(const float[][MESES][DIAS], int);
int main()
{
    float v[ANIOS][MESES][DIAS] = {{45}, {5, 27}, {260}};
    Lluvia(v, ANIOS);
    return 0;
}
void Lluvia(const float v[][MESES][DIAS], int anios)
{
    int i, j, k, mesMin, anioMinProm;
    float total = 0, prom, minProm = 99999, minMes = 99999;
    for (i = 0; i < anios; i++)
    {
        for (j = 0; j < MESES; j++)
        {
            float lluviaPorMes = 0;
            for (k = 0; k < DIAS; k++)
            {
                lluviaPorMes += v[i][j][k];
            }
            if (lluviaPorMes < minMes)
            {
                minMes = lluviaPorMes;
                mesMin = j + 1;
            }
            total += lluviaPorMes;
        }
        prom = total / 12;
        if (prom < minProm)
        {
            minProm = prom;
            anioMinProm = i + 1;
        }
    }
    printf("El mes que menos llovio fue %d\n", mesMin);
    printf("El anio que tuvo menor precipitacion promedio fue %d", anioMinProm);
}