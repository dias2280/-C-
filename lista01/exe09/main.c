#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 09!\n");

    int p,m,g,calculo;

    printf("Informe a quantidade de camisas P \n");
    scanf("%d",&p);

    printf("Informe a quantidade de camisas M \n");
    scanf("%d",&m);

    printf("Informe a quantidade de camisas G \n");
    scanf("%d",&g);

    calculo=((p*10)+(m*12)+(g*15));

    printf("o Cliente deve pagar o Valor de %d",calculo);


    return 0;
}
