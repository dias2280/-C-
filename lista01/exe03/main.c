#include <stdio.h>
#include <stdlib.h>

int main(){

    float paes,broas,calculo1,calculo2,calculo3;

    printf("Exercicio 03!\n");

    printf("Informe a quantidade de paes vendidos \n");
    scanf("%f",&paes);

    printf("informe a quantidade de broas vendidas \n");
    scanf("%f",&broas);

    calculo1=(paes*0.12);
    calculo2=(broas*1.5);
    calculo3=(calculo1+calculo2);


    printf(" \n O Valor total arrecadado com a venda dos paes e das broas foi %.2f \n",calculo3);
    printf("O Valor a ser depositado na poupanca e %.2f",(calculo3/10));


    return 0;
}
