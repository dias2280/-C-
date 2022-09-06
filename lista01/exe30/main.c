#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("exercicio 30 !\n");
    float salario,venda;

    printf("Informe o salario \n");
    scanf("%f",&salario);

    printf("Informe o valor total das vendas \n");
    scanf("%f",&venda);

    printf("A comissao das vendas e %.2f \n" ,(venda*0.04));
    printf("O Salario final com sua comissao sera %.2f",(salario+(venda*0.04)));
    return 0;
}
