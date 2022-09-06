#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 14!\n");

    double pizza,calculo;

    printf("Informe o Raio da pizza \n");
    scanf("%lf", &pizza);

    calculo= pow(pizza,2)*3.14;

    printf("A Area da pizza é %lf",calculo);


    return 0;
}
