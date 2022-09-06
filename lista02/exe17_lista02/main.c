#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 17 lista 02!\n");

    int pedido,quantidade;
    float conta=0;

    printf("******CARDAPIO*******\n");
    printf("*1 - Cachorro quente  R$ : 11,00 *\n");
    printf("*2 - Bauru            R$ : 8,50 *\n");
    printf("*3 - Misto quente     R$ : 8,00 *\n");
    printf("*4 - Hamburguer*      R$ : 9,00 *\n");
    printf("*5 - Chesseburguer    R$ : 10,00*\n");
    printf("*6 - Refrigerante*    R$ : 4,50 *\n");
    printf("******CARDAPIO*******\n");
    fflush(stdin);
    scanf("%d",&pedido);
    printf("Informe a quantidade desejada do item\n");
    scanf("%d",&quantidade);



    switch(pedido){
case 1 :
    conta=(conta+11)*quantidade;
    printf("%.2f R$ Total do pedido.",conta);
    break;
case 2 :
    conta=conta+8.50*quantidade;
    printf("%.2f R$ Total do pedido.",conta);
    break;
case 3 :
    conta=conta+8*quantidade;
    printf("%.2f R$ Total do pedido.",conta);
    break;
case 4 :
    conta=conta+9*quantidade;
    printf("%.2f R$ Total do pedido.",conta);
    break;
case 5 :
    conta=conta+10*quantidade;
    printf("%.2f R$ Total do pedido.",conta);
    break;
case 6 :
    conta=conta+4.50*quantidade;
    printf("%.2f R$ Total do pedido.",conta);
    break;
    }
    return 0;
}
