#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 11 !\n");

    int hora,nivel;

    printf("informe o nivel do professor \n");
    scanf("%d",&nivel);

    printf("Informe a quantidade de horas aula semanais \n");
    scanf("%d",&hora);

        switch(nivel){
case 1 :
    printf("Professor de nivel 1 recebera %.2f ",(12*hora*4.5));
    break;
case 2 :
    printf("Professor de nivel 2 recebera %.2f ",(17*hora*4.5));
    break;
case 3 :
    printf("Professor de nivel 3 recebera %.2f ",(25*hora*4.5));
    break;
    }

    return 0;
}
