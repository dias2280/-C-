#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 36!\n");
    float salario,salariomin;

    salariomin=1212;

    printf("Informe seu salario \n");
    scanf("%f",&salario);

    printf("Voce recebe %.2f salarios minimos",(salario/salariomin));

    return 0;
}
