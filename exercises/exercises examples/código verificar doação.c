#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    int idade, doc = 3, food, sick, peso;
    char name[30];

    printf("trouxe documento oficial com foto? [1-sim / 0-não] "); 
    scanf("%d", &doc); 
    if (doc == 0){ //verifica se a pessoa trouxe documento
        printf("volte quando trouxer\n"); 
        exit(0);
    }else if(doc == 1){
    printf("qual o seu nome?: \n"); //pergunta nome
    scanf("%s", &name);

    printf("qual a sua idade?: \n"); //pergunta idade
    scanf("%i", &idade);

    printf("qual seu peso?: \n"); //pergunta peso
    scanf("%i", &peso);

    printf("comeu alguma coisa antes de vim? [1-sim / 0-não] \n"); //pergunta se comeu
    scanf("%i", &food);

    printf("vc se encontra doente? [1-sim / 0-não] \n"); //pergunta se esta doente
    scanf("%i", &sick);

    if(idade < 16 || idade > 69){ //valida critério para indicar erro
        printf("Não pode doar por não ter idade.\n");
    }else if(peso < 50){
        printf("Não pode doar por estar abaixo do peso.\n");
    }else if(food == 0){
        printf("Não pode doar por estar sem comer.\n");
    }else if(sick == 1){
        printf("Não pode doar por estar doente.\n");
    }else{ //caso nenhum critério ser atendido volta resultado positivo
        printf("O voluntário de nome %s, com idade de %i anos e com %i kilos, está apto para doar sangue.\n",name,idade,peso);
    }
    }else{ //caso a pessoa coloque um valor não esperado
        printf("coloque uma opção válida");
    }
}