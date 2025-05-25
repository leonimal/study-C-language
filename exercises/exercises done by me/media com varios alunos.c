#include <stdio.h>
#include <stdlib.h>
 
 
int main(){
    int nota1[3],nota2[3],media[3];
    printf("insira a primeira nota de 3 alunos");
    for(int i=0;i<3;i++){
        printf("\nnota aluno %.d",i+1);
        scanf("%d",&nota1[i]);
    }
    printf("\ninsira a segunda nota de 3 alunos");
    for(int i=0;i<3;i++){
        printf("\nnota aluno %.d",i+1);
        scanf("%d",&nota2[i]);
    }   
    for(int i=0;i<3;i++){
        media[i] = (nota1[i]+nota2[i])/2;
        printf("\na media do aluno %.d é igual a: %d",i+1,media[i]);
        if(media[i]>6){
            printf("\no aluno %.d passou!",i+1);
        }else{
            printf("\no aluno %.d nao passou!",i+1);
        }
    }
 
}