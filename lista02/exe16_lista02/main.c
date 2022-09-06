#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("exercicio 16!\n");

    float saldo;
    printf("Informe o saldo do cliente \n");
    scanf("%f",&saldo);

    if(saldo<=200){
        printf("Devido ao baixo saldo nao havera credito especial");
    }
    if((saldo>200) && (saldo<=400)){
        printf("O cliente tera um credito especial de 20procento resultando em %.2f\n",(saldo*0.2));
    }
    if((saldo>=401) && (saldo<=600)){
        printf("O cliente tera um credito especial de 30porcento resultando em %.2f\n",(saldo*0.3));
    }
    if(saldo>=601){
        printf("O cliente tera um credito especial de 40porcento resultando em %.2f\n",(saldo*0.4));
    }
    return 0;
}
