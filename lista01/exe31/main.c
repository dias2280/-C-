#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 31 !\n");

    float peso,engordar,emagrecer;

    printf("Informe seu peso \n");
    scanf("%f", &peso);

    engordar=(peso*0.15)+peso;
    emagrecer=peso-(peso*0.2);

    printf("Caso voce engorde 15 porcento ficara com  %.2f \n",engordar);
    printf("Caso voce emagreca 20 porcento ficara com  %.2f \n",emagrecer);


    return 0;
}
