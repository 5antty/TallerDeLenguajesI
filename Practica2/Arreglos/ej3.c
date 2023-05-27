#include<stdio.h>
#define COL 3

void escalar(int [][COL], int, int);
int main(){
    int m[COL][COL]={3,4,5,6,7,1,3};
    escalar(m, COL, 5);
    for(int i=0; i<COL; i++){
        for(int j=0; j<COL; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void escalar(int m[][COL], int filas, int esc){
    int i, j;
    for(i=0; i<filas; i++){
        for(j=0; j<COL; j++){
            m[i][j]*=esc;
        }
    }
}
