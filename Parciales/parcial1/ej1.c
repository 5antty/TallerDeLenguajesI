#include <stdio.h>
#define TAM_PALABRA 30
#define MAX_SINONIMOS 10

typedef struct _sinonimos_t
{
    char palabra[TAM_PALABRA + 1];
    char cant_sinonimos;
    char sinonimos[MAX_SINONIMOS][TAM_PALABRA + 1];
} sinonimos_t;

int main()
{
    FILE *f1 = fopen("sinonimos.dat", "r");
    FILE *f2 = fopen("sinonimos.txt", "w");
    if (f1 == NULL)
        return 1;
    if (f2 == NULL)
        return 1;
    else
    {
        sinonimos_t s;
        fread(&s, sizeof(sinonimos_t), 1, f1);
        while (!feof(f1))
        {
            fprintf(f2, "%s", s.palabra);
            for (int i = 0; i < s.cant_sinonimos; i++)
            {
                fprintf(f2, "%s|", s.sinonimos[i]);
            }
            fread(&s, sizeof(sinonimos_t), 1, f1);
        }
    }
    fclose(f1);
    fclose(f2);
}