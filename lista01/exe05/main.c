#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Exercicio 05!\n");

    float valor,gasolina,calculo;

    printf("Informe o valor a ser abastecido \n");
    scanf("%f", &valor);
    printf("Informe o valor da gasolina \n");
    scanf("%f",&gasolina);

    calculo=(valor/gasolina);

    printf("Voce abasteceu %.3f, litros", calculo);




    return 0;
}
