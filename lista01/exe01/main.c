#include <stdio.h>
#include <stdlib.h>

int main()
{
    double largura,altura,calculo;

    printf("Exercicio 01 !\n");
    printf("Informe a largura do Terreno \n");
    scanf("%lf",&largura);

    printf("Informe a altura do Terreno \n");
    scanf("%lf",&altura);

    calculo = (largura*altura);

    printf("A Area do Terreno e %lf",calculo);

    return 0;
}
