#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 13 lista 2!\n");
    int cem,cinquenta,vinte,dez,cinco,dois,troco;

    printf("Informe o valor a ser calculado o troco \n");
    scanf("%d",&troco);

        cem=troco/100;
        printf("Notas de 100 : %d \n",cem);

        cinquenta=((troco-cem*100)/50);
        printf("Notas de 50 : %d \n",cinquenta);

        vinte=(troco-((cem*100)+(cinquenta*50)))/20;
        printf("Notas de 20 : %d \n",vinte);

        dez=(troco-((cem*100)+(cinquenta*50)+(vinte*20)))/10;
        printf("Notas de 10 : %d \n",dez);

        cinco=(troco-(((cem*100)+(cinquenta*50)+(vinte*20)+(dez*10))))/5;
        printf("Notas de 5 : %d \n",cinco);

        dois=(troco-(((cem*100)+(cinquenta*50)+(vinte*20)+(dez*10)+(cinco*5))))/2;
        printf("Notas de 2 : %d \n",dois);


    return 0;
}
