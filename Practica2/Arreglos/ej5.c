#include <stdio.h>
#define FILA 3
#define COL 3
void sumaMatriz(const int[][COL], const int[][COL], int[][COL], int);
int main()
{
    int d, i, j, a[FILA][COL] = {1, 2, 3, 4, 5}, b[FILA][COL] = {5, 2, 5, 6, 3}, c[FILA][COL];
    sumaMatriz(a, b, c, FILA);
    for (i = 0; i < FILA; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    /// scanf("%d", &d);
    return 0;
}
void sumaMatriz(const int A[][COL], const int B[][COL], int C[][COL], int filas)
{
    int i, j;
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < COL; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}