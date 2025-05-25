#include <stdio.h>
#include <stdlib.h>

void main(){
    int opc;
    float sal, salreaj, salnovo;

    printf("cargos: [1-Auxiliar de escritório] [2-Secretário(a)] [3-Cozinheiro(a)] [4-Entregador(a)]");
    printf("\nqual o seu cargo na empresa?: ");
    scanf("%i", &opc);
    if(opc < 1 || opc > 4){ //válida se colocou uma opção valida
        printf("escolha uma opção válida");
        exit(1);
    }else{
    printf("\nqual seu salário atualmente?: ");
    scanf("%f", &sal);

    switch(opc){
        case 1:
        salreaj = ((sal * 7) / 100);
        salnovo = (salreaj + sal);
        break;

        case 2:
        salreaj = ((sal * 9) / 100);
        salnovo = (salreaj + sal);
        break;

        case 3:
        salreaj = ((sal * 5) / 100);
        salnovo = (salreaj + sal);
        break;

        case 4:
        salreaj = ((sal * 12) / 100);
        salnovo = (salreaj + sal);
        break;
        
        default:
        printf("Escolha uma opção válida.\n");
        exit(1);
    }

    if(sal < 0){
        printf("O salário não pode ser negativo.\n");
        exit(1);
    }
    
    if(opc == 1){
        printf("\nseu cargo é auxiliar de excritório, seu reajuste foi de R$%f e seu sálario a partir de agora é R$%f",salreaj,salnovo);
    }else if(opc == 2){
        printf("\nseu cargo é secretário, seu reajuste foi de R$%f e seu sálario a partir de agora é R$%f",salreaj,salnovo);
    }else if(opc == 3){
        printf("\nseu cargo é cozinheiro, seu reajuste foi de R$%f e seu sálario a partir de agora é R$%f",salreaj,salnovo);
    }else if(opc == 4){
        printf("\nseu cargo é entregador, seu reajuste foi de R$%f e seu sálario a partir de agora é R$%f",salreaj,salnovo);
    }else{
        printf("\nescolha uma opção válida");
    }
    }
}