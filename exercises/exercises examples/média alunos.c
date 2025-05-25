#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int aluno,cont = 1,total=0;
    float nota,result;
    
    printf("informe quantos alunos tem na sua sala de aula: ");
    scanf("%d", &aluno);
    
    while( cont <= aluno ){
        printf("diga a nota do aluno %d: ",cont);
        scanf("%f", &nota);
        (total = total + nota);
        cont++;
    }
    (result = total/aluno);
    printf("a média aritmética será %d / %d ou seja: %f",total,aluno,result);
}