#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 24!\n");

    float suco,agua,suco2;

    printf("Informe a quantidade de suco a ser feito em L \n");
    scanf("%f",&suco);

    agua=(suco*0.8);
    suco2=(suco*0.2);

    printf("A quantidade de agua nescessaria %.2f e %.2f Suco",agua,suco2);

    return 0;
}
