#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 5 IF!\n");
    int n1;

    printf("Informe o valor a ser analisado \n");
    scanf("%d",&n1);

    if ((n1%2)==0){
        printf("A variavel e par e sera somado 5 o valor final e %d \n",(n1+5));
    }else{
        if ((n1%2)!=0){
            printf("A variavel e impar e sera somado 8 o valor final e %d \n",(n1+8));
        }else{
            if(n1==0){
                printf("O valor e zero \n ");
            }
        }
    }
    return 0;
}
