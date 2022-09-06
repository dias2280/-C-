#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("exercicio 7 for!\n");
    int i=0,soma=0,idade;

    for(i=1;i<=20;i++){
        printf("Informe a idade \n");
        scanf("%d",&idade);
        if(idade>=
           18){
            soma=soma+1;
        }
    }
    printf("a quantidade de maiores de idade e %d",soma);
    return 0;

}
