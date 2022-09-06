#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 15!\n");

   float valortotal,calculo2;
   int calculo;

    printf("Informe o valor total da compra \n");
    scanf("%f", &valortotal);

   calculo=(valortotal/3);
   calculo2=valortotal-(calculo*2);

   printf("Valor do primeiro %d \n", calculo);
   printf("Valor do segundo %d \n", calculo);
   printf("Valor do terceiro %.2f \n", calculo2);









    return 0;


}
