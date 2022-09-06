#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("exercicio 11!\n");

    int dias,mes,ano,diasobra;

    printf("Informe a quantidade de dias sem acidente \n");
    scanf("%d",&dias);

    ano=(dias/360); //Quantos anos

    mes=((dias-(ano*360))/30); // mes

    diasobra=(dias%30); // dias

    printf("\n Anos : %d \n",ano);
    printf("\n Meses : %d \n",mes);
    printf("\n dias : %d \n",diasobra);


    return 0;
}
