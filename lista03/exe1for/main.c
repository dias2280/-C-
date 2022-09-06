#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Exercicio 1 for!\n");

    int vetor1[10],vetor2[10],soma[10];

    vetor1[0]=0;
    vetor2[0]=0;
    soma[0]=0;

    for (int i=0;i<10;i++){
        printf("Informe o valor do primeiro vetor[%d]:\n",i);
            scanf("%d",&vetor1[i]);
        printf("Informe o valor do segundo vetor[%d]:\n",i);
            scanf("%d",&vetor2[i]);

        soma[i]=vetor1[i]+vetor2[i];
    }
        for(int i=0;i<10;i++){
            printf("posicao [%d] , soma[%d] : %d\n",i,i,soma[i]);
        }



    return 0;
}
