#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 16 Lanchonete Gostosura!\n");

    float queijo,presunto,hamburguer,hamburguer2;

    printf("Informe a quantidade de hamburguers a serem feitos \n ");
    scanf("%f", &hamburguer);

    queijo=(0.10*hamburguer);
    presunto=(0.05*hamburguer);
    hamburguer2=(0.1*hamburguer);

    printf("A quantidade nescessaria de queijo sera %.2f  KG\n",queijo);
    printf("A quantidade nescessaria de presunto sera %.2f  KG\n",presunto);
    printf("A quantidade nescessaria de hamburguer sera %.2f  KG\n",hamburguer2);
    return 0;
}
