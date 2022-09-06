#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("exercicio 9 lista 4!\n");
    //Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor
//após a retirada dos nulos e negativos.

    int a[10],b[10],indice=0;

    for(int i=0;i<10;i++){
        printf("Informe os elementos de A [%d]",i);
        scanf("%d",&a[i]);

        if(a[i] != 0){
            b[indice]=a[i];
            indice++;
        }
    }

    for(int i=0;i<indice;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
