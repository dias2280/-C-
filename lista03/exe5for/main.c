#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("exe6for!\n");

    int numero,i=0,soma;
    soma=0;
    for(i=1;i<=10;i++){
        printf("Informe o numero \n");
        scanf("%d",&numero);
        soma=soma+numero;

    }
    printf("%d\n",soma);
    return 0;
}
