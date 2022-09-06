#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 14 lista 02!\n");
    float valor,ano;

    printf("Informe o valor do veiculo \n");
    scanf("%f",&valor);
    printf("Informe o ano do veiculo \n");
    scanf("%f",&ano);

    if(ano>=1990){
        printf("O valor do imposto sobre veiculo IPVA sera de 1.5 porcento : %.2f reais\n",(valor*0.015));
    }
    if(ano<1990){
        printf("O Valor do imposto sobre veiculo IPVA sera de 1 porcento : %.2f reais\n",(valor*0.01));
    }

    return 0;

}
