#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("exercicio 13!\n");

    int centena,dezena,unidade,numero;

    printf("Informe o Numero a ser analisado \n");
    scanf("%d", &numero);

    centena =(numero/100);
    dezena =((numero-(centena*100))/10);
    unidade =(numero%10);

    printf("O Numero de centenas: %d \n",centena);
    printf("O Numero de dezenas:%d \n",dezena);
    printf("O Numero de unidades:%d \n",unidade);



    return 0;
}
