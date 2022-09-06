#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("exercico 3 lista 4!\n");

    int a[8],b[8],i=0;
    for (i=0;i<8;i++){
        printf("Informe os vetores A \n");
        scanf("%d",&a[i]);
        b[i]=a[i]*2;
    }
        for(i=0;i<8;i++){
            printf("Valores do vetor A : %d \n",a[i]);
            printf("Valores do vetor B : %d \n",b[i]);
        }

    return 0;
}
