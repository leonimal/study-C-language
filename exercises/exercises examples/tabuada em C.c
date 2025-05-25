#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c = 1,d;
    
    printf("escreva um valor que esteja entre 1 a 10 para que a tabuada seja mostrada");
    scanf("%d", &a);
    if(a >= 1 && a <= 10){
        for(b = 10;b > 0;b--){
            (d = a * c);
            printf("\n%d * %d = %d",a,c,d);
            c++;
        }
    }else{
        printf("seu numero é menor que 1 ou maior que 10");
    }
}