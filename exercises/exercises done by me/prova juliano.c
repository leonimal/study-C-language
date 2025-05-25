#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>
 
int main(void)
{
    char usuario[30],usuario2[30];
    int matriz[3][3], lass=0,val=0;
    
    printf("escreva seu nome de usuario");//1
    scanf("%s", usuario);//2
    if (strlen(usuario) <= 2)//1
    {
        printf("informe o usuario com mais de 2 caracteres");
        exit(1);
    }else
    {
        printf("\nagora insira valores de 0 a 9 na matriz");
        while(lass < 9)
        {   
            for(int i=0; i < 3; i++)
            {
                for(int j=0; j < 3; j++){
                    printf("\ninsira o valor [%d][%d]",i+1,j+1);
                    scanf("%d", &matriz[i][j]);
                }
            }   
            for(int i=0; i < 3; i++)
            {
                for(int j=0; j < 3; j++){
                    if(matriz[i][j] <= 9 && matriz[i][j] >= 0)
                    {
                        lass++;
                    }else{
                        lass=0;
                        if(lass == 0){
                            printf("algum valor inserido esta errado, repita o processo");
                        }
                    }
                }
            }
        }
        printf("insira novamente seu usuario\n");
        scanf("%s", usuario2);
        printf("verificando se %s é igual a %s...\n",usuario,usuario2);
        int result = strcmp(usuario,usuario2);
        
        
        if(result == 0){
            printf("verificado com sucesso! usuario confere\n");
            printf("verificado se há valores maior ou igual a 5 na matriz...\n");
            for(int i=0; i < 3; i++){
                for(int j=0; j < 3; j++){
                    if(matriz[i][j] >= 5){
                        val=1;
                        break;
                    }
                }
            }
            if(val == 1){
                printf("os valores são:");
                for(int i=0; i < 3; i++){
                for(int j=0; j < 3; j++){
                    if(matriz[i][j] >= 5){
                        printf("\nmatriz[%d][%d} = %d",i,j,matriz[i][j]);
                    }
                }
            }
            }else{
                printf("não ah valores maior que 5!");
            }
        }else{
            printf("usuario não confere");
            exit(1);
        }
    }
    return 0;
}