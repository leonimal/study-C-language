#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definindo uma variável
    int a = 5, b;

    //Imprimindo a variável "a"
    printf("%d", a);

    //Concatenando
    printf("\nO valor da var a eh: %d", a);

    //Mudando o valor de "a"
    a = 15;

    //Concatenando
    printf("\nO valor da var a eh: %d", a);

    //Pula linhas
    printf("\n");

    //Lendo valores
    printf("Escreva o valor de b: ");
    // limpar o buffer
    //fflush(stdin);
    scanf("%d", &b);

    //Concatenando
    printf("\nO valor da var b eh: %d", b);

    //Pula linhas
    printf("\n");

    //Imprimindo
    printf("Uhuu");

    //Pausando
    system("pause");

}
