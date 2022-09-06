#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 40!\n");

    double c1,c2,calculo;

    printf("Informe o Valor do primeiro cateto \n");
    scanf("%lf",&c1);
    printf("Informe o Valor do segundo cateto \n");
    scanf("%lf",&c2);

    calculo=sqrt(pow(c1,2)+pow(c2,2));

    printf("O Valor da hipotenusa %.2lf ",calculo);

    return 0;
}
