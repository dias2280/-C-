#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("exercicio 28!\n");
    float n1,n2,calculo;

    printf("Informe a 1 nota \n");
    scanf("%f", &n1);

    printf("Informe 2 nota \n");
    scanf("%f", &n2);

    calculo=(((n1*2)+(n2*3))/6);

    printf("A Media ponderada e =  %.2f \n",calculo);



    return 0;
}
