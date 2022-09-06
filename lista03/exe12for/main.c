#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 12 for!\n");

    int valor,i=0,u=0,j=0,k=0;

    for(i=0;i<=6;i++){
        printf("Informe o valor a ser analisado \n");
            scanf("%d",&valor);
        if((valor>=0) && (valor<=100))
            {
            u++;
            }else if ((valor>100) && (valor<=200)){
                j++;
            }else if((valor>200)){
            k++;
            }
        }
        printf("Possuimos : %d Numeros menores que 100 \n",u);
        printf("Possuimos : %d Numeros maiores que 100 e menores que 200 \n",j);
        printf("Possuimos : %d Numeros maiores que 200 \n",k);
    return 0;
}
