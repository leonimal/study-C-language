#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont = 0, num, max = 0;
        while(cont < 10){
            printf("escreva 10 numeros: ");
            scanf("%d", &num);
            cont++;
            if(num > max){
                max = num;
            }
        }
    printf("o maior numero de todos foi %d", max);
}