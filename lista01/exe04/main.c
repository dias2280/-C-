#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,calculo;
    char nome;
    printf("Exercicio 04!\n");

    printf("informe seu nome \n");
    scanf("%c", &nome);
    printf("Informe sua idade \n");
    scanf("%d",&idade);

    calculo=(idade*365);

    printf("Voce %c , ja viveu %d dias", nome,calculo );

    return 0;
}
