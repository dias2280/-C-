#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 2 for!\n");

    int i=0,a,soma;

    printf("Informe a quantidade de repeticoes \n");
    scanf("%d",&a);

    soma=0;

    for(i=1;i<=a;i++){
        soma=soma+i;
        printf("Soma dos valores : %d \n",i);
    }
        printf("A Soma dos valores sera : %d \n", soma);
    return 0;
}
