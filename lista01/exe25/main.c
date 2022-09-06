#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 25!\n");


    float raio,altura;

    printf("Informe o raio da caixa \n");
    scanf("%f",&raio);

    printf("Informe a altura da caixa");
    scanf("%f",&altura);

    printf("O Volume do cilindro é %.2f",(3.14*raio*raio*altura));
    return 0;
}
