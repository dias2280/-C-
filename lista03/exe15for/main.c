#include <stdio.h>
#include <stdlib.h>

int main()
{
     //Desenvolva um algoritmo capaz de apresentar na tela o fatorial de um número inteiro informado
    //pelo usuário.
    printf("Exercicio 15 lista 03!\n");

    int fatora,u=0;

    printf("informe um numero ");
    scanf("%d",&fatora);
    u=fatora;
        for (int i=1;i<=u-1;i++){
            fatora=fatora*i;
            printf("calculando... %d \n",fatora);
        }
        printf("**********************\n");
    printf("fatoracao dela [ %d ] ",fatora);
    return 0;
}
