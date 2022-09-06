#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("exercicio 6 for !\n");
    int i=0,soma=0,idade;

    for(i=1;i<=20;i++){
        printf("Informe a idade \n");
        scanf("%d",&idade);
        soma=(idade+soma);
    }
    printf("A Media da idade dos usuarios e : %d \n",(soma/20));
    return 0;
}
