#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
void main(){

    //Definindo Vari�veis
    int a = 1, b = 10;

    //Contando at� 10
    while(a <= 10){

        //Imprimindo 'a' na tela
        printf("\nO valor de a eh %d", a);

        //Incremento
        a++;     //a = a + 1;

    }

    //Contagem Regressiva
    while(b >= 1){

        //Imprimindo 'b' na tela
        printf("\n%O valor de b eh %d", b);

        //Incremento
        b--;    //b = b - 1;

    }

    //Pausa o programa ap�s executar
    system("pause");

}

