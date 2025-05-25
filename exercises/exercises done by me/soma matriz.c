#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
    int matriz[3][3],i,j,p=0;
    printf("digite elementos da matriz");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\nelemento[%d][%d]",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            p += matriz[i][j];
        }
    }
    printf("a soma de todos os elementos são %d",p);
}