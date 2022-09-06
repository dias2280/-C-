#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 12!\n");

    float salario,aumento,desconto;

    printf("\n Informe o Salario Atual do funcionario \n");
    scanf("%f",&salario);

    aumento = (salario*0.15)+salario;
    desconto = aumento-(aumento*0.08);

    printf("o Salario Reajustado do funcionario sera %.2f ",desconto);




    return 0;
}
