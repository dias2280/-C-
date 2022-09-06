#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 39!\n");

    float salario,c1,c2,calculo1,calculo2,calculo3;

    printf("Informe o salario \n ");
    scanf("%f",&salario);

    printf("Informe o valor da conta 1 \n ");
    scanf("%f",&c1);

    printf("Informe o valor da conta 2 \n ");
    scanf("%f",&c2);

    printf("Os juros da conta 1 sera %.2f \n ",(c1*0.02));
    printf("Os juros da conta 2 sera %.2f \n",(c2*0.02));

    calculo1=(c1*0.02);
    calculo2=(c2*0.02);
    calculo3=(salario-(calculo1+calculo2))-c1-c2;

    printf("Ira sobrar %.2f do seu salario",calculo3);





    return 0;
}
