#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 10! \n");

    double xa,ya,xb,yb,calculo,calculo2;

    printf("Informe a posicao no eixo X do ponto A \n");
    scanf("%lf",&xa);

    printf("Informe a posicao no eixo Y do ponto A \n");
    scanf("%lf",&ya);

    printf("Informe a posicao no eixo X do ponto B \n");
    scanf("%lf",&xb);

    printf("Informe a posicao no eixo Y no Ponto B \n");
    scanf("%lf",&yb);

    calculo=(pow(xb-xa,2))+(pow(yb-ya,2));
    calculo2=sqrt(calculo);

    printf("A distancia entre dois pontos e %.2lf", calculo2);



    return 0;
}
