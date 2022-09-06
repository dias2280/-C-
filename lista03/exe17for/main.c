#include <stdio.h>
#include <stdlib.h>

int main()
{
// 17. Em um restaurante Self-Service, o preço do quilo custa R$ 23,59. Crie um algoritmo
//        a. que, para cada cliente, leia o peso do prato e valor gasto com bebida e calcule o valor total
//        da conta que o cliente irá pagar [ valor da conta = bebida + (peso * 15) ]. Só encerre a
//        execução quando o peso do prato digitado for igual a 0 e o valor da bebida for também igual
//        a 0.
            printf("Exercicio 17 For!\n");

            float quilo=0,peso=0,total=0,i=0,bebida=0;

            for(i=-2;i<=peso;i++){

            printf("Informe a quntidade em KG \n");
            scanf("%f",&peso);
            quilo=quilo+(peso*15)+bebida;
                if(peso==0){
                break;
            }
            printf("Informe o valor gasto com bebida\n");
            scanf("%f",&bebida);
            }
            printf("[ %.2f ] Total",quilo);


    return 0;
}
