#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a=0;
    printf("suas matrizes serão de qual tamanho?");
    scanf("%d", &a);
    int matriza[a][a],matrizb[a][a],resultado[a][a];
 
    printf("\ndigite os elementos da matriz 1");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("\nM1 elemento[%d][%d]",i,j);
            scanf("%d",&matriza[i][j]);
        }
    }
    printf("\nagora digite os elementos da matriz 2");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("\nM2 elemento[%d][%d]",i,j);
            scanf("%d",&matrizb[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            resultado[i][j] = matriza[i][j]+matrizb[i][j];
            printf("\no resultado dos elementos M1[%d][%d] + M2[%d][%d] é:",i,j,i,j);
            printf("\n%d",resultado[i][j]);
        }
    }
}