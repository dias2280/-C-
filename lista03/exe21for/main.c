#include <stdio.h>
#include <stdlib.h>

int main()
{

//     O restaurante da quest�o 17 realiza reservas de mesas atrav�s de liga��es telef�nicas e possui 50
//mesas dispon�veis para reserva. Dessas mesas, 25 s�o na �rea de fumantes e 25 na �rea de n�o
//fumantes.
//  Para cada liga��o recebida, o restaurante deve verificar se a reserva � para a mesa na
//�rea de fumantes ou de n�o fumantes e contabilizar a quantidade de mesas restantes dispon�veis
//em cada �rea.
//  Construa um algoritmo que realize a reserva das mesas e encerre a execu��o
//quando n�o houver mais mesas dispon�veis (nem na �rea de fumantes, nem na �rea de n�o
//fumantes).

    printf("Exercicio 20 lista 03!\n");

     int i=0,fumante=0,naofumante=0;
    char tipo;


    printf("UTILIZE [F - Fumante]  Ou  [N - Nao fumante]\n");

    for(i=0;i<99;i++){
        printf("Informe o tipo da [%d] mesa :",i);
        scanf("%c",&tipo);
        fflush(stdin);

    if((tipo == 'f') || ( tipo == 'F')){
    fumante++;
    }
    if((tipo == 'n') || ( tipo == 'n')){
    naofumante++;
    }if(fumante>25){
    fumante--;
    i--;
    printf("Nao possuimos mais mesas de fumantes\n");
    }if(naofumante>25){
    naofumante--;
    i--;
    printf("Nao possuimos mais mesas Nao Fumantes\n");
    }if(fumante+naofumante == 50){
    printf("Encerrando aplica��o , nao possuimos mais mesas");
    break;
    }

    }

        printf("[%d : fumante] \n [%d : naofumante]",fumante,naofumante);

    return 0;
}
