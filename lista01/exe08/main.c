#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 8!\n");
    float nota1,nota2,nota3,calculo;


    printf("Informe a Nota 1 do aluno \n");
    scanf("%f",&nota1);

    printf("Informe a nota 2 do Aluno \n");
    scanf("%f",&nota2);

    printf("Informe a nota 3 do aluno \n");
    scanf("%f",&nota3);

    calculo = ((nota1*1)+(nota2*2)+(nota3*3))/6;

    printf("Nota final do aluno %f",calculo);


    return 0;
}
