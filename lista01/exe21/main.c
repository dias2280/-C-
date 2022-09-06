#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 21!\n");

    float latas,garrafa600,garrafa2l,calculo;

    printf("Informe a quantidade de latas adquiridas  \n");
    scanf("%f",&latas);

    printf("Informe a quantidade de Garrafas600  \n");
    scanf("%f",&garrafa600);

    printf("Informe a quantidade de garrafas de 2l \n");
    scanf("%f",&garrafa2l);

    calculo = (latas*0.350)+(garrafa600*0.600)+(garrafa2l*2);

    printf("O total de litros de refrigerante comprado foram %.2f Litros", calculo);
    return 0;
}
