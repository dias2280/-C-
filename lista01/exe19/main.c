#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 19!\n");

    int chip,alimento,calculo;

    printf("Informe a quantidade de frangos a seres analisados \n");
    scanf("%d",&chip);

    calculo = (chip*4)+(chip*7);

    printf("O Valor total para marcar todos os frangos vai ser %d",calculo);

    return 0;
}
