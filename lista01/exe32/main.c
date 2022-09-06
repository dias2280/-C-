#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 32 !\n");
    float peso;

    printf("Informe o Peso da pessoa em kg \n");
    scanf("%f",&peso);

    printf("O peso em gramas sera %.2f gramas ",(peso*1000));

    return 0;
}
