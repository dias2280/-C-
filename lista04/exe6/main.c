#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ler um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas. Escreva um
    //programa que determine e escreva a menor e a maior idades e suas respectivas posições.
    printf("Exercicio 6 lista 04!\n");

    int vet[10],i=0,maior=0,menor=999,u=0,j=0;

    for(i=0;i<10;i++){
        printf("Informe a IDADE [%d] : ",i);
        scanf("%d",&vet[i]);

        if(vet[i]>maior){
            maior=vet[i];
            u=i;
        }if(vet[i]<menor){
        menor=vet[i];
        j=i;
        }
    }
    printf("Maior idade : %d na posicao : %d \n",maior,u);
    printf("Menor idade : %d na posicao : %d \n",menor,j);

    return 0;
}
