#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 1 IF ! \n");

    int n1,n2;

    printf("Informe o primeiro valor \n");
    scanf("%d",&n1);
    printf("Informe o segundo valor \n");
    scanf("%d",&n2);
        if (n1>n2){
            printf("O maior valor e n1 %d \n",n1);
        }else{
            if (n2>n1){
                printf("O maior valor e n2 %d \n",n2);
            }else{
                printf("Os Valores sao iguais");
            }
        }

    return 0;
}
