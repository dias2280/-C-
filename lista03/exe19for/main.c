#include <stdio.h>
#include <stdlib.h>

int main()
{
   // 19. Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar :
//     a. A menor altura do grupo;
//     b. A maior altura do grupo;
    printf("Exercicio 19 lista 03!\n");

    int i=0,maior=0,menor=999,altura[999],u=0,j=0;
    for( i=1;i<16;i++){

        printf("informe a altura do [%d] : ",i);
        scanf("%d",&altura[i]);


    if(altura[i]>maior){
    maior=altura[i];
    u=i;
    }
    if(altura[i]<menor){
    menor=altura[i];
    j=i;
    }
    }
    printf("[%d] MAIOR posicao [%d]\n",maior,u);
    printf("[%d] MENOR posicao [%d]",menor,j);

    return 0;
}
