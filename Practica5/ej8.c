#include <stdio.h>
int main()
{
    FILE *archT, *archB;
    archT = fopen("numeros.txt", "w+");
    archB = fopen("numeros.dat", "wb+");
    if (archT == NULL)
        return 1;
    if (archB == NULL)
        return 2;
    int n;
    printf("Ingrese el primer numero: ");
    scanf("%d", &n);
    while (n >= 0 && n <= 9)
    {
        fprintf(archT, "%d", n);
        fwrite(&n, sizeof(int), 1, archB);
        printf("Ingrese el siguiente numero: ");
        scanf("%d", &n);
    }
    printf("Numeros copiados");
    fclose(archB);
    fclose(archT);
    return 0;
}