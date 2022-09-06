#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("exercicio 02 lista 04!\n");

    int tam=5;
    int i,vet[tam],impar,par,maior50=0,menor7=0;

    impar=0;
    par=0;

    for (i=0;i<tam;i++){
        printf("Informe o valor a ser analisado[%d] : \n",i);
        scanf("%d",&vet[i]);
            if((vet[i]%2)==0){
                par++;
            }
                if((vet[i]%2)!=0){
                impar++;
                }if(vet[i]>50){
                    maior50++;
                }if(vet[i]<7){
                    menor7++;
                }
        }


    printf("Pares : %d  || Impares : %d || Maiores 50 : %d || Menores 7 : %d ||",par,impar,maior50,menor7);

    return 0;
}

