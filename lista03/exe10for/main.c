#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 10 for!\n");

    int valor,i=0,u=0;

    for(i=0;i<=19;i++){
        printf("Informe o valor a ser analisado \n");
            scanf("%d",&valor);
        if(valor%2 == 0){
            u++;
            }
        }
        printf("Neste numero adicionados possuimos : %u pares \n",u);
    return 0;
}
