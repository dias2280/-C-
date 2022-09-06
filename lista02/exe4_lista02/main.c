#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 4 if!\n");

    int n1;

    printf("Informe o numero \n");
    scanf("%d",&n1);

    if (n1>0){
        printf("O Valor e positivo e seu dobro e %d ",(n1*2));
    }else{
        if(n1<0){
        printf("O valor e negativo e seu triplo e %d \n",(n1*3));
        }else{
            if(n1==0){
                printf("o Valor e nulo igual a zero");
            }
        }
    }

    return 0;
}
