#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 7 if!\n");
    char sexo;
    float altura;

    printf("Informe o sexo , para homens utilize H \n Para mulheres utilize M \n");
    scanf("%c",&sexo);

    printf("Informe sua altura ");
    scanf("%f",&altura);

    if ((sexo == 'h') || (sexo == 'H'))
    {
        printf("O peso ideal e %f",((72.7*altura)-58));
    }else{
        if ((sexo == 'm' ) || (sexo == 'M'))
            {
            printf("O peso ideal e %.2f",((62.1*altura)-44.7));
            }


    }

    return 0;
}
