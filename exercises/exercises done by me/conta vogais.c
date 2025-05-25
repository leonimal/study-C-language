#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <assert.h>
 
int main(void)
{
    char pal[20];
    int cont=0,i;

    printf("escreva uma palavra");
    scanf("%s",pal);

    for(int i=0; i < strlen(pal);i++){
        if (pal[i] == 'a' || pal[i] == 'e' || pal[i] == 'i' || pal[i] == 'o' || pal[i] == 'u'){
            cont++;
        }
    }
    printf("%d",cont);

    return 0;
}