#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 33!\n");

    float basem,basemn,altura,calculo;

    printf("Informe a base maior");
    scanf("%f",&basem);
    printf("Informe a base menor");
    scanf("%f",&basemn);
    printf("Informe a altura");
    scanf("%f",&altura);

    calculo=((basem+basemn)*altura)/2;

    printf("A Area do trapezio %.2f \n",calculo);




    return 0;
}
