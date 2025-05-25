#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Definindo Variáveis
    int a = 1, b = 10;

    //Contando até 10
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

    //Pausa o programa após executar
    system("pause");

}

