#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 11 for!\n");

    int valor,i=0,u=0;

    for(i=0;i<=19;i++){
        printf("Informe o valor a ser analisado \n");
            scanf("%d",&valor);
        if((valor>=0) && (valor<=100))
            {
            u++;
            }
        }
        printf("Possuimos : %d Numeros menores que 100 \n",u);
    return 0;
}
