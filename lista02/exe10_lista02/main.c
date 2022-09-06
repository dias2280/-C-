#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 10 if!\n");

    int a,b;
    printf("Informe o primeiro numero\n");
    scanf("%d",&a);
    printf("Informe o segundo numero\n");
    scanf("%d",&b);

    if(a>b){
        printf("A subtracao do maior numero pelo menor e : %d ",(a-b));
    }else if (b>a){
        printf("A subtracao do maior numero pelo menor e : %d",(b-a));
    }
    return 0;
}
