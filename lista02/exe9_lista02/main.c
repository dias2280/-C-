#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,calculo,ra=0;

    printf("exercico 9 lista 02!\n");

    printf("Informe o RA do aluno\n");
    scanf("%d",&ra);

    printf("Informe o valor da primeira nota\n");
    scanf("%d",&n1);
    printf("Informe o valor da segunda nota\n");
    scanf("%d",&n2);
    printf("Informe o valor terceira nota\n");
    scanf("%d",&n3);

    calculo = ((n1+n2+n3)/3);

        if(calculo>=60){
            printf("O aluno de ra %d , Foi aprovado com %d \n",ra,calculo);
                }else{
        if(calculo<60){
            printf("O Aluno %c foi reporovado com nota %d\n",ra,calculo);
        }
    }


    switch(ra){
case 1:
    printf("\nGabriel D.\n");
    break;
case 2:
    printf("\njoao\n");
    break;
case 3:
    printf("\nana\n");
    break;
}

    return 0;
}
