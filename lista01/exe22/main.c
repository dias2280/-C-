#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 22!\n");

    float moeda5,moeda10,moeda25,moeda50,moeda1r,calculo;

    printf("Informe a quantidade de moedas de 0.05 centavos \n");
    scanf("%f",&moeda5);

    printf("Informe a quantidade de moedas de 0.10 centavos \n");
    scanf("%f",&moeda10);

    printf("Informe a quantidade de moedas de 0.25 centavos \n");
    scanf("%f",&moeda25);

    printf("Informe a quantidade de moedas de 0.50 centavos \n");
    scanf("%f",&moeda50);

    printf("Informe a quantidade de moedas de 1 real \n");
    scanf("%f",&moeda1r);

    calculo=((moeda5*0.05)+(moeda10*0.1)+(moeda25*0.25)+(moeda50*0.5)+(moeda1r*1));

    printf("O Valor total acumulado no cofrinho foi %.2f, \n",calculo);



    return 0;
}
