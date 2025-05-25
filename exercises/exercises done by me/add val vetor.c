#include<stdlib.h>
#include<stdio.h>
 
 
int main(){
    int cab[5], de, ke = 0;
 
    for(int i = 1;i <= 5; i++){
        printf("coloque o valor %i",i);
        scanf("%d", &cab[i]);
    }
    for(int i = 1; i <= 5; i++){
        de = (cab[i]);
        ke = (ke + de);
    }
    printf("\no total seria: %i", ke);
}