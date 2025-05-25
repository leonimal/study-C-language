#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>
 
int main(void)
{
    int a[3][3],b[3][3],c[3][3];
    srand(time(NULL));
    
    for(int i=0;i < 3;i++){
        for(int j=0;j<3;j++){
            a[i][j] = rand() % 100;
            printf("\no valor de a[%d][%d] = %d",i,j,a[i][j]);
        }
    }
    for(int i=0;i < 3;i++){
        for(int j=0;j<3;j++){
            b[i][j] = rand() % 100;
            printf("\no valor de b[%d][%d] = %d",i,j,b[i][j]);
        }
    }
    for(int i=0;i < 3;i++){
        for(int j=0;j<3;j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("\no resultado de %d + %d = %d",a[i][j],b[i][i],c[i][j]);
        }
    }
    return 0;
}