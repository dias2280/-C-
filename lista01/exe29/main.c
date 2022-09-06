#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 29!\n");

    float n1;
    printf("Informe o valor do produto \n");
    scanf("%f", &n1);

    printf("O Valor do produto com desconto sera %.2f ",((n1)-(n1*0.1)));
    return 0;
}
