#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 23 !\n");

    float alturaS,alturaP,calculo,altura;

    printf("Informe a sua altura \n");
    scanf("%f",&altura);

    printf("Informe a altura da sua sombra \n");
    scanf("%f",&alturaS);

    printf("Informe o tamanho da sombra do predio \n");
    scanf("%f",&alturaP);

    calculo=((altura*alturaP)/alturaS);

    printf("A Altura do predio é %.2f ",calculo);


    return 0;
}
