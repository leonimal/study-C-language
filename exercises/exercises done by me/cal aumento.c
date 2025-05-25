#include<stdio.h>
#include <stdlib.h>
 
void main()
{
    float a=1015,c=1.5,d;
    int b, i;
    printf("quantos anos se passaram desde que você foi contratado?: ");
    scanf("%d", &b);
    for(i=1;i<b;i++){
        c = (c * 2);
        d = ((a * c) / 100);
        a = (a + d);
    }
    printf("vc começou em 2005,se vc trabalhou %d anos então hoje seria %.2i seu salário era de R$1000 com o aumento de %f porcento, agora ele é: R$%f",b,2005 + b,c,a);
}