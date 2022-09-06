#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 13 for!\n");

    int repeticoes,soma=0,numero,i;

    printf("Informe a quantidade de repeticoes \n");
    scanf("%d",&repeticoes);
    for (i=1;i<=repeticoes;i++){
        printf("Informe um numero\n");
        scanf("%d",&numero);
        soma=soma+numero;
        if (numero<0){
                printf("Programa encerrado por digitar numero negativo\n");
            break;
        }
    }
    printf("A soma dos numero digitados %d \n",soma);

    return 0;
}
