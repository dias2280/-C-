#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 38!\n");
    int ano,anoA;

    printf("Informe seu ano de nascimento \n");
    scanf("%d",&ano);

    printf("Informe o ano atual\n");
    scanf("%d",&anoA);

    printf("Sua idade em anos e %d \n",anoA-ano);
    printf("Sua idade em meses e %d \n",((anoA-ano)*12));
    printf("Sua idade em dias e %d \n",((anoA-ano)*365));
    printf("Sua idade em semanas e %d \n",(((anoA-ano)*365)/7));

    return 0;
}
