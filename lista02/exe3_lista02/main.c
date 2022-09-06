#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercio 3!\n");

    int a,b;

    printf("Informe o Primeiro valor \n");
    scanf("%d",&a);
    printf("Informe o segundo Valor \n");
    scanf("%d",&b);

    if(a==b){
        printf("Os valores A e B sao iguais e serao somados, total : %d",(a+b));
    }else{
        printf("Os valores sao diferentes e serao multiplicados, total : %d",(a*b));
    }
    return 0;
}
