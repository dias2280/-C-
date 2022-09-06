#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio numero 20!\n");

    int blusa,novelo;

    printf("Informe a Quantiade de blusas que foram produzidas \n");
    scanf("%d", &blusa);

    printf("Informe a Quantidade de novelo utilizado \n");
    scanf("%d", &novelo);

    printf("Sera utilizado %d novelos\n",(blusa/novelo));

    return 0;
}
