#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 6 !\n");

    int n1,n2,n3;

    printf("informe o primeiro valor \n");
    scanf("%d",&n1);
    printf("informe o segundo valor \n");
    scanf("%d",&n2);
    printf("informe o terceiro valor \n");
    scanf("%d",&n3);

    if((n1>n2) && (n2>n3)){
        printf("\n %d \n %d \n %d",n1,n2,n3);
    }else{
        if((n1>n3) && (n3>n2)){
            printf("\n %d \n %d \n %d",n1,n3,n2);
        }else{
            if((n2>n1) && (n1>n3)){
                printf("\n %d \n %d \n %d",n2,n1,n3);
            }else{
                if((n2>n3) && (n3>n1)){
                    printf("\n %d \n %d \n %d",n2,n3,n1);
                }else{
                    if((n3>n2) && (n2>n1)){
                        printf("\n %d \n %d \n %d",n3,n2,n1);
                    }else{
                        if((n3>n1) && (n1>n2)){
                            printf("\n %d \n %d \n %d",n3,n1,n2);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
