#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 07!\n");

    int dia,mes,calculo;

    printf("Informe o Dia do mes \n");
    scanf("%d",&dia);

    printf("Informe o Mes \n");
    scanf("%d",&mes);

    calculo=((mes-1)*30)+dia;

    printf("Desde o inicio do ano se passaram %d", calculo);


    return 0;
}
