//bibliotecas
#include <stdio.h>
#include <stdlib.h>
//prototipagens das funcoes
int quantidade_casas();
void audiencia();

//variaveis globais
int casas,aud[5];
//main
int main()
{
    audiencia();
    return 0;
}

//funcoes
int quantidade_casas(){
    int casas;
    printf("Informe a quantidade de casas participantes \n");
    scanf("%d",&casas);
    return casas;
    }
void audiencia(){
    int canal,canal3=0,aux,canal5=0,canal8=0,canal11=0,canal13=0;
    int casas=quantidade_casas();
    float totalcanal=0;
    for (int i=1;i<=casas; i++){
        printf("Informe qual canal a casa [%d] \n",i);
    scanf("%d",&canal);
        switch(canal){
        case 3:
            printf("informe a quantidade de pessoas assistindo canal 3 \n");
            scanf("%d",&aux);
            canal3=aux+canal3;
            printf("\n%d",canal3);
            break;
        case 5:
            printf("informe a quantidade de pessoas assistindo canal 5 \n");
            scanf("%d",&aux);
            canal5=aux+canal5;
            printf("%d",canal5);
            break;
        case 8:
            printf("informe a quantidade de pessoas assistindo canal 8 \n");
            scanf("%d",&aux);
            canal8=aux+canal8;
            printf("%d",canal8);
            break;
        case 11:
            printf("informe a quantidade de pessoas assistindo canal 11 \n");
            scanf("%d",&aux);
            canal11=aux+canal11;
            printf("%d",canal11);
            break;
        case 13:
            printf("informe a quantidade de pessoas assistindo canal 13 \n");
            scanf("%d",&aux);
            canal13=aux+canal13;
            printf("%d",canal13);
            break;
        }
        totalcanal=canal3+canal5+canal8+canal11+canal13;


        }
        printf("**RELATORIO DE AUDIECIA**\n");
        printf("**Canal 3 : [%.2f]**\n",(canal3/totalcanal)*100.0);
        printf("**Canal 5 : [%.2f]**\n",(canal5/totalcanal)*100.0);
        printf("**Canal 8 : [%.2f]**\n",(canal8/totalcanal)*100.0);
        printf("**Canal 11 : [%.2f]**\n",(canal11/totalcanal)*100.0);
        printf("**Canal 13 : [%.2f]**\n",(canal13/totalcanal)*100.0);
        printf("********************");
    }

