#include <stdio.h>
#include <stdlib.h>

int main()
{

//    22. Um viajante decidiu se aventurar e percorrer toda a BR 101 de carro a partir do quil�metro 0 at�
//ultrapassar o quil�metro 4000, parando em v�rias cidades durante o percurso.
//      Crie um algoritmo que, em cada cidade que o viajante parar, leia a
//informa��o da quilometragem percorrida e adicione ao valor da quilometragem total.
//Encerre o algoritmo quando o valor da quilometragem total percorrida for igual ou
//ultrapassar os 4000 km.
    printf("Exercicio 22 for!\n");

   int quilometragem=0,i,quilometragemtotal=0;
            printf("Voce percorreu [%d] ate aqui \n",quilometragemtotal);

    for(int i=0;i<=99999;i++){
        printf("Informe quantos km foram percorridos\n");
        scanf("%d",&quilometragem);
        quilometragemtotal=quilometragemtotal+quilometragem;
        printf("Voce percorreu [%d] ate aqui \n",quilometragemtotal);
    i=quilometragem;
    if(quilometragemtotal>=4000){
        printf("Voce percorreu os 4000km desejados");
        break;
    }
    }

    return 0;
}
