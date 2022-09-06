#include <stdio.h>
#include <stdlib.h>

int main()
{

//     O restaurante da questão 17 realiza reservas de mesas através de ligações telefônicas e possui 50
//mesas disponíveis para reserva. Dessas mesas, 25 são na área de fumantes e 25 na área de não
//fumantes.
//  Para cada ligação recebida, o restaurante deve verificar se a reserva é para a mesa na
//área de fumantes ou de não fumantes e contabilizar a quantidade de mesas restantes disponíveis
//em cada área.
//  Construa um algoritmo que realize a reserva das mesas e encerre a execução
//quando não houver mais mesas disponíveis (nem na área de fumantes, nem na área de não
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
    printf("Encerrando aplicação , nao possuimos mais mesas");
    break;
    }

    }

        printf("[%d : fumante] \n [%d : naofumante]",fumante,naofumante);

    return 0;
}
