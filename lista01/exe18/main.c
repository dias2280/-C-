#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 18 \n");

    float normal,extra,calculo1,calculo2,calculo3;

    printf("Informe quantas horas normais trabalhadas\n");
    scanf("%f",&normal);
    printf("Informe quantas horas extras trabalhadas\n");
    scanf("%f",&extra);

    calculo1=(normal*10)+(extra*15);
    calculo2=(calculo1*0.1);
    calculo3=(calculo1)-(calculo2);

    printf("O Salario bruto é %.2f \n", calculo1);
    printf("Sera descontado 10 porcento de impostos , que totaliza %.2f \n",calculo2);
    printf("O Salario Final do funcionario sera %.2f \n",calculo3);


    return 0;
}
