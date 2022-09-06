#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco {
    char nome[50];
    char rua[50];
    int numero;
    char complemento[50];
};


int menuopcoes();
void limparendereco(struct endereco cliente[]);
void cadastrar(struct endereco cliente[]);
void consultar(struct endereco cliente[]);

int main()
{
    int op;

    struct endereco cliente[5];

    do {
        op = menuopcoes();

        if(op == 1){
           cadastrar(cliente);
        }else if(op == 2){
            limparendereco(cliente);
        }else if(op == 3){
            consultar(cliente);
        }
    } while(op != 0);

    return 0;
}

int menuopcoes(){

    int opcao;

    printf("*********Menu Cadastro*********");
    printf("\n*1 -    Cadastrar enderecos   *");
    printf("\n*2 -    limpar enderecos      *");
    printf("\n*3 -    Consultar enderecos   *");
    printf("\n*0 -    Sair                  *");
    printf("\n*******************************\n");
    scanf("%d",&opcao);
    switch(opcao){
case 0:
    break;

    }

    return opcao;
}

void limparendereco(struct endereco cliente[]){

    int limpar,indCliente;

    printf("\n******** Limpar Endereco *********");
    printf("\n*1 - excluir Apenas um cliente ***");
    printf("\n*2 - excluir todos Clientes    ***");
    printf("\n**********************************\n");
    scanf("%d",&limpar);

    switch(limpar){
    case 1:
        fflush(stdin);
        printf("Informe qual cliente deseja excluir 0 a 4: ");
        scanf("%d",&indCliente);
        strcpy(cliente[indCliente].nome,"");
        strcpy(cliente[indCliente].rua,"");
        cliente[indCliente].numero = 0;
        strcpy(cliente[indCliente].complemento,"");
        printf("cliente[%d] Excluido\n",indCliente);
        break;
    case 2:
        fflush(stdin);
        for(int  i = 0 ; i<5 ; i++){
        strcpy(cliente[i].nome,"");
        strcpy(cliente[i].rua,"");
        cliente[i].numero = 0;
        strcpy(cliente[i].complemento,"");
        printf("Todos os clientes foram excluidos\n");
        break;
        }
    }

}

void cadastrar(struct endereco cliente[]){

    for(int  i = 0 ; i<5 ; i++){
        fflush(stdin);
        printf("\nInforme o nome do Usuario[%d] : \n",i);
        gets(cliente[i].nome);
        fflush(stdin);
        printf("\nInforme a rua do Usuario[%d] : \n",i);
        gets(cliente[i].rua);
        fflush(stdin);
        printf("\nInforme numero da residencia do Usuario[%d] : \n",i);
        scanf("%d",&cliente[i].numero);
        fflush(stdin);
        printf("\nInforme o complemento do endereco do suario[%d] : \n",i);
        gets(cliente[i].complemento);
        fflush(stdin);
    }

}

void consultar(struct endereco cliente[]){

 for(int  i = 0 ; i<5 ; i++){
    printf("\n*********CLIENTE [%d] *********",i);
    printf("\nUsuario[%d] : nome : %s ",i,cliente[i].nome);
    printf("\nUsuario[%d] : rua : %s ",i,cliente[i].rua);
    printf("\nUsuario[%d] : numero : %d ",i,cliente[i].numero);
    printf("\nUsuario[%d] : complemento : %s ",i,cliente[i].complemento);
    printf("\n*******************************\n");
    }


}
