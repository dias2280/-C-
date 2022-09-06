#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 15 lista 02!\n");

    float salario;
    int codigo;

    printf("O Salario do funcionario \n");
    scanf("%f",&salario);
    printf("Informe o codigo do funcionario \n");
    scanf("%d",&codigo);

    switch(codigo){

case 101:
    printf("O Aumento salarial sera de 10 Porcento : %.2f\n",(salario*0.1));
    printf("O salario final apos o aumento sera de %.2f\n",(salario+(salario*0.1)));
        break;

case 102:
    printf("O Aumento salarial sera de 20 Porcento : %.2f\n",(salario*0.2));
    printf("O salario final apos o aumento sera de %.2f\n",(salario+(salario*0.2)));
    break;

case 103:
    printf("O Aumento salarial sera de 30 Porcento : %.2f\n",(salario*0.3));
    printf("O salario final apos o aumento sera de %.2f\n",(salario+(salario*0.3)));
    break;

default:
    printf("o cargo nao consta na lista e tera aumento de 40 procento : %.2f\n",(salario*0.4));
    printf("O salario final apos o aumento sera de %.2f\n",(salario+(salario*0.4)));
    break;
    }

    return 0;
}
