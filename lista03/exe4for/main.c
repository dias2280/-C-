#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("Exercicio 4 for!\n");
    char nome[50];
    int i=0,n=0;
    printf("Informe o seu nome \n");
    scanf("%s",nome);
    printf("Informe a quantidade de vezes \n");
    scanf("%d",&n);

    for (i=1;i<=n;i++){;
        printf("%s \n",nome);
    }
    return 0;
}
