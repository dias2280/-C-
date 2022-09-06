#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 2 if !\n");

    int n1;

    printf("Informe o valor a ser analisado \n ",n1);
    scanf("%d", &n1);

    if ((n1%2)==0){
        printf("O numero e par");
    }else{
    printf("o numero e impar");
    }

    return 0;
}
