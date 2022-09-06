#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("exercicio 6!\n");
    float prato,calculo;

    printf("Digite o peso em kg \n ");
    scanf("%f",&prato);

    calculo = (prato-0.100)*12;
    printf("O valor a ser pago %.2f",calculo);


    return 0;
}
