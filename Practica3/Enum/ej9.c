#include <stdio.h>
typedef enum
{
    DOM,
    LUN,
    MAR,
    MIE,
    JUE,
    VIE,
    SAB
} semana;
void imprimirDia(semana);
void imprimirDia2(semana);
int main()
{
    semana s;
    imprimirDia(s);
    printf("\n");
    imprimirDia2(s);
    return 0;
}

void imprimirDia2(semana s)
{
    const char *nomDia[] = {"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
    for (s = DOM; s <= SAB; s++)
    {
        printf("%s \n", nomDia[s]);
    }
}
void imprimirDia(semana s)
{
    for (s = DOM; s <= SAB; s++)
    {
        switch (s)
        {
        case (DOM):
            printf("Domingo ");
            break;
        case (LUN):
            printf("Lunes ");
            break;
        case (MAR):
            printf("Martes ");
            break;
        case (MIE):
            printf("Miercoles ");
            break;
        case (JUE):
            printf("Jueves ");
            break;
        case (VIE):
            printf("Viernes ");
            break;
        case (SAB):
            printf("Sabado ");
            break;
        }
    }
}