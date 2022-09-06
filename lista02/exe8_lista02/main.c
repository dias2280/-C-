#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("exercicio 8 if!\n");
    float etiqueta;
    char pagamento[3];
    printf("Informe a forma de pagamento \n");
    printf("---------------------------------------------------------\n");
    printf("Para pagamento avista em dinheiro ou cheque use ad \n Para pagamento avista no credito use ac \n Para pagamento 2x sem juros use sj \n Para pagamento 2x com juros use cj \n");
    printf("---------------------------------------------------------\n");
    fflush(stdin);
    scanf("%s",pagamento);
    printf("Informe o Valor da etiqueta \n ");
    fflush(stdin);
    scanf("%f",&etiqueta);

    //--------------------------------------------------------------------//

                if((strcmp(pagamento, "ad") == 0) || strcmp(pagamento, "AD") == 0){
                printf("O valor com desconto avista no debito sera %.2f \n",(etiqueta-(etiqueta*0.1)));
        }else{
                if((strcmp(pagamento, "ac") == 0) || (strcmp(pagamento, "AC") == 0)){
                printf("O valor com desconto avista no credito sera %.2f \n",(etiqueta-(etiqueta*0.15)));
        }else{
                if((strcmp(pagamento, "sj") == 0) || (strcmp(pagamento, "SJ") == 0)){
                printf("O valor sem juros em 2x sera %.2f ",(etiqueta/2));
        }else{
                if((strcmp(pagamento, "cj") == 0) || (strcmp(pagamento, "CJ") == 0)){
                printf("O valor com juros em 2x sera %.2f ", ((etiqueta*0.1)+etiqueta));
            }
        }
    }
}
    return 0;
}
