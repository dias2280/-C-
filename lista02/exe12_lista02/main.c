#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 11!\n");

    int l1,l2,l3;

    printf("Informe o Primeiro lado do triangulo\n");
    scanf("%d",&l1);
    printf("Informe o Segundo lado do triangulo\n");
    scanf("%d",&l2);
    printf("Informe o Terceiro lado do triangulo\n");
    scanf("%d",&l3);

    if((l1<l2+l3) && (l2<l1+l3) && (l3<l1+l2)){

        if ((l1!=l2) && (l2!=l3) && (l1!=l3)){
        printf("triangulo do tipo escaleno, possui todos lado com medidas diferentes \n");
            }else{
                if ((l1==l2) && (l1!=l3)){
                    printf("triangulo do tipo isoceles, possui 2 lado com medidas iguais \n");
                        }else{
                            if ((l1==l2) && (l2==l3)){
                                printf("triangulo do tipo equilatero e possui os lados iguais \n");
            }
        }
    }
    }else{
        printf("Os valores nao formam um triangulo");
    }
    return 0;
}
