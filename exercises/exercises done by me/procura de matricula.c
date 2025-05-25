#include <stdio.h>
#include <stdlib.h>
 
 
int main(){
    int matriz[10],a=0,b=0,cont,o;
 
    printf("insira 10 matriculas cadastradas");
    for(cont=0;cont<10;cont++){
        printf("\nmatricula %.d: ",cont+1);
        scanf("%d", &matriz[cont]);
    }
    while(a<3){
        printf("qual valor deseja informar\n");
        scanf("%d",&o);
        for(cont=0;cont<10;cont++){
            if(o==matriz[cont]){
                printf("a matricula %d esta presente\n",o);
                b++;
            }
        }
        if(b==0){
            printf("a matricula %d não esta presente\n",o);
        } 
        a++;
        b=0;
    }
}