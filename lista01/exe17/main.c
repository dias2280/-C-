#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 17 Conversao de temperatura!\n");
    float temperatura,calculo;

    printf("Informe a temperatura em celsius \n");
    scanf("%f",&temperatura);

    calculo=((temperatura*1.8)+32);

    printf("A temperatura em farenhient e %.2f ",calculo);


    return 0;
}
