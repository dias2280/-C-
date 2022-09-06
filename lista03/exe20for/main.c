#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 20 lista 3!\n");
    // Uma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de
//     animais da loja e, para cada animal, leia a informação da espécie do animal (se é gato ou
//     cachorro). Ao final, exiba a quantidade de animais que são gatos e a quantidade de animais que
//     são cachorros existentes na loja

    int i=0,animais,cachorro=0,gato=0;
    char tipo;

    printf("Informe a quantidade de animais na loja : ");
    scanf("%d",&animais);
    fflush(stdin);
    printf("UTILIZE [G - Gato]  Ou  [C - Cachorro]\n");

    for(i=0;i<animais;i++){
        printf("Informe o tipo do [%d] animal :",i);
        scanf("%c",&tipo);
        fflush(stdin);

    if((tipo == 'c') || ( tipo == 'C')){
    cachorro++;
    }
    if((tipo == 'g') || ( tipo == 'G')){
    gato++;
    }
    }


        printf("[%d : Cachorro] \n [%d : Gato]",cachorro,gato);

    return 0;
}
