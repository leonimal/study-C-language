#include<stdlib.h>
#include<stdio.h>
 
int main(){
    int valor[5], soma = 0;
    float media;
    for(int i = 1;i <= 5; i++){ //coloca os valores
        printf("coloque o valor %d",i);
        scanf("%d", &valor[i]); //pega os valores
        soma = (soma + valor[i]);
    }
    media = soma/5.; //soma a média
    printf("\no total seria: %d", soma);
    printf("\na média total seria: %.2f", media);
    printf("\nas notas maiores que a media são: "); 
    for(int i = 1;i <= 5; i++){ 
        if (valor[i] >= media){
            printf("%d. ",valor[i]); //mostra os maiores valores
        }
    }
    printf("\nas notas menores que a meida são: "); 
    for(int i = 1;i <= 5; i++){ 
         if (valor[i] <= media){
            printf("%d. ",valor[i]); //mostra os menores valores
        }
    }
}