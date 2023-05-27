#include <stdio.h>
#define LONG 50
int main()
{
    char *nom1 = "prueba.txt", *nom2 = "prueba2.txt";
    int num;
    FILE *f1 = fopen(nom1, "r");
    if (f1 == NULL)
        return 1;
    FILE *f2 = fopen(nom2, "w");
    if (f2 == NULL)
        return 2;
    num = ftell(f1);
    fseek(f1, 0, SEEK_END);
    char c[50];
    printf("%d\n", num);
    fread(c, sizeof(char), num, f1);
    printf("no pone nada: %s", c);
    /*while (!feof(f1))
    {
        fwrite(c, sizeof(char), num, f2);
        fread(c, sizeof(char), num, f1);
    }*/
    fwrite(c, sizeof(char), num, f2);

    fprintf(stdout, "Contenido copiado de %s a %s", nom1, nom2);
    fclose(f1);
    fclose(f2);
    return 0;
}