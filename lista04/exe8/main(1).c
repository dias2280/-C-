#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 8 lista 4!\n");
    int resultado[]={1,2,3,4,5},aposta[10],acertos=0;

    for(int i=0;i<10;i++){
        printf("Informe o valor[%d] da aposta : ",i);
        scanf("%d",&aposta[i]);
            if(resultado[i] == aposta[i]){
            acertos++;
            }

    }
    printf("%d",acertos);

    return 0;
}
