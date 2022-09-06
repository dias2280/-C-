#include <stdio.h>
#include <stdlib.h>

int main()
{
//Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva:
//a) a soma de elementos armazenados neste vetor que são inferiores a 15;
//b) a quantidade de elementos armazenados no vetor que são iguais a 15; e
//c) a média dos elementos armazenados no vetor que são superiores a 15.

    printf("exercicio 5 lista 04!\n");

    int vet[10],i=0,ele15=0,soma=0,soma2=0,maior=0;

    for(i=0;i<8;i++){
    printf("Informe o valor [%d] : ",i);
    scanf("%d",&vet[i]);
        if(vet[i]<15){
            soma=soma+vet[i];
        }if(vet[i]==15){
            ele15++;
        }if(vet[i]>15){
            maior++;
            soma2=(soma2+vet[i]);

        }
    }
        printf("Soma dos elementos MENOR 15 : %d \n",soma);
        printf("Quantidade de elementos IGUAIS 15 : %d \n",ele15);
        printf("Media dos elementos Maiores 15 : %d ",(soma2/maior));


    return 0;
}
