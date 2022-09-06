#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Exercicio 14 lista 03!\n");

    char condicao[4];

    printf("Ola tudo bem \n");
    scanf("%s",condicao);
    while(strcmp(condicao, "nao") == 0){
          printf("Ola tudo bem \n");
          scanf("%s",condicao);
          }
    return 0;
}
