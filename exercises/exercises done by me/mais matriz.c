#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int matriz[3][3][3],i,j,p;
    printf("digite elementos da matriz");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int p=0;p<3;p++){
                printf("\nelemento[%d][%d][%d]",i,j,p);
                scanf("%d",&matriz[i][j][p]);
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int p=0;p<3;p++){
                printf("\nno elemento [%d][%d][%d] ah:",i,j,p);
                printf("\n%d",matriz[i][j][p]);
            }
        }
    }
}