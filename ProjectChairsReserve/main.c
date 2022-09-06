#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>


// Declarando minha estrutura de dados
struct reserva
{
    char nome[50];
    int ocupado;
    int numero;
};

// DECLARANDO FUNCOES
int criarMenu();
void carregarInformacao(struct reserva cadeiras[3][3]);
void salvarInformacao(struct reserva cadeiras[3][3]);

void consultarCadeiras(struct reserva cadeiras[3][3]);
void criarCadeiras(struct reserva cadeiras[3][3]);
void reservarCadeiras(struct reserva cadeiras[3][3]);
void comprarCadeiras(struct reserva cadeiras[3][3]);
void cancelarReserva(struct reserva cadeiras[3][3]);
void gerarRelatorio(struct reserva cadeiras[3][3]);

int main()
{

    int op;
    struct reserva cadeiras[3][3];

    criarCadeiras(cadeiras);

    do
    {
        op = criarMenu();

        switch (op)
        {
        case 1:

            reservarCadeiras(cadeiras);
            break;

        case 2:
        {
            comprarCadeiras(cadeiras);
            break;
        }
        case 3:
        {
            consultarCadeiras(cadeiras);
            break;
        }
        case 4:
        {
            cancelarReserva(cadeiras);
            break;
        }
        case 5:
        {
            gerarRelatorio(cadeiras);
            break;
        }
        case 6:
        {
            salvarInformacao(cadeiras);
        }
        break;
        case 7:
        {
            carregarInformacao(cadeiras);
            break;
        }
        case 0:
        {
            return 0;
        }
        default:
            printf("Opcao Invalida");
            break;
        }
    }

    while (op != 0);

    getch();
    return 0;
}
// FUNCAO PARA CRIAR MENU
int criarMenu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    // salvar estado atual cor
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    int opcao;
    SetConsoleTextAttribute(hConsole, 112);
    printf("\n*****************Menu*********************");
    printf("\n* 1 -    Reservar Cadeira                *");
    printf("\n* 2 -    Comprar Cadeira                 *");
    printf("\n* 3 -    Consultar Cadeiras Disponiveis  *");
    printf("\n* 4 -    Cancelar Reserva                *");
    printf("\n* 5 -    GERAR RELATORIO                 *");
    printf("\n* 6 -    Salvar Informacoes              *");
    printf("\n* 7 -    Carregar Informacoes            *");
    printf("\n* 0 -    Sair                            *");
    printf("\n******************************************\n");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    scanf("%d", &opcao);

    return opcao;
}
// FUNCAO PARA CRIAR CADEIRAS VAZIAS
void criarCadeiras(struct reserva cadeiras[3][3])
{
    int cont=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            strcpy(cadeiras[i][j].nome, "VAZIO");
            cadeiras[i][j].ocupado = 0;
            cadeiras[i][j].numero = cont++;
        }
    }
}
// FUNCAO PARA RESERVAR CADEIRAS
void reservarCadeiras(struct reserva cadeiras[3][3])
{
    //cores
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    // salvar estado atual cor
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    int num;

    printf("informe o numero da cadeira\n");
    scanf("%d", &num);
    fflush(stdin);

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
            if (cadeiras[i][j].numero == num && cadeiras[i][j].ocupado == 0)
            {
                printf("Informe o nome da reserva : \n");
                gets(cadeiras[i][j].nome);
                cadeiras[i][j].ocupado = 1;
                SetConsoleTextAttribute(hConsole, 32);
                printf("******Cadeira[%d]********\n",cadeiras[i][j].numero);
                printf("Cadeira Reservada com sucesso \n");
                SetConsoleTextAttribute(hConsole, saved_attributes);
            }
            else if(cadeiras[i][j].ocupado == 1 && cadeiras[i][j].numero == num)
            {
                SetConsoleTextAttribute(hConsole, 64);
                printf("Esta cadeira ja esta reservada \n");
                SetConsoleTextAttribute(hConsole, saved_attributes);
            }
            else if(cadeiras[i][j].ocupado == 2 && cadeiras[i][j].numero == num)
            {
                SetConsoleTextAttribute(hConsole, 64);
                printf("Esta cadeira ja foi comprada \n");
                SetConsoleTextAttribute(hConsole, saved_attributes);
            }
        }
    }
}
// FUNCAO PARA COMPRAR CADEIRAS
void comprarCadeiras(struct reserva cadeiras[3][3])
{
    //cores
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    // salvar estado atual cor
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    int num;
    char nome[500];

    printf("informe o numero\n");
    scanf("%d", &num);
    fflush(stdin);
    printf("Informe o nome da reserva\n");
    gets(nome);
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
            if (strcmp(cadeiras[i][j].nome, nome) == 0 && cadeiras[i][j].ocupado == 1 && cadeiras[i][j].numero == num)
            {
                cadeiras[i][j].ocupado = 2;
                SetConsoleTextAttribute(hConsole, 32);
                printf("******Cadeira[%d]********\n", cadeiras[i][j].numero);
                printf("Cadeira Comprada com sucesso \n");
                SetConsoleTextAttribute(hConsole, saved_attributes);
            }
            else if(strcmp(cadeiras[i][j].nome, nome) != 0 && cadeiras[i][j].numero == num &&cadeiras[i][j].ocupado == 0)
            {
                SetConsoleTextAttribute(hConsole, 64);
                printf("nome informado nao corresponde com o da reserva \n");
                SetConsoleTextAttribute(hConsole, saved_attributes);
            }
            else if(cadeiras[i][j].ocupado == 0 && cadeiras[i][j].numero == num)
            {
                SetConsoleTextAttribute(hConsole, 64);
                printf("A Cadeira nao foi reservada \n");
                SetConsoleTextAttribute(hConsole, saved_attributes);
            }
        }
    }
}
// FUNCAO PARA CONSULTAR TODAS CADEIRAS DISPONIVEIS
void consultarCadeiras(struct reserva cadeiras[3][3])
{

    //cor
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    // salvar estado atual cor
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (cadeiras[i][j].ocupado == 0)
            {
                SetConsoleTextAttribute(hConsole, 32);
                printf("[%d]", cadeiras[i][j].numero);
                SetConsoleTextAttribute(hConsole, saved_attributes);
            }
            if (cadeiras[i][j].ocupado == 1)
            {
                SetConsoleTextAttribute(hConsole, 144);
                printf("[RESERVADO]");
                SetConsoleTextAttribute(hConsole, saved_attributes);
            }
            if (cadeiras[i][j].ocupado == 2)
            {
                SetConsoleTextAttribute(hConsole, 64);
                printf("[COMPRADO]");
                SetConsoleTextAttribute(hConsole, saved_attributes);
            }
        }
        printf("\n");
    }
}
// fechar arquivo
fclose(ponteiro_dados);
// FUNCAO PARA CRIAR CANCELAR RESERVA/COMPRA
void cancelarReserva(struct reserva cadeiras[3][3])
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    // salvar estado atual cor
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    int num;
    char nome[500];
    printf("informe o qual numero\n");
    scanf("%d", &num);
    fflush(stdin);
    printf("Informe o nome da reserva : \n");
    gets(nome);
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
            if (strcmp(cadeiras[i][j].nome, nome) == 0 && cadeiras[i][j].numero == num)
            {
                cadeiras[i][j].ocupado = 0;
                strcpy(cadeiras[i][j].nome, "VAZIO");
                printf("******Cadeira[%d]********\n", cadeiras[i][j].numero);
                printf("Reserva Cancelada com sucesso \n");
            }
            else if((cadeiras[i][j].numero == num) == 1 && (cadeiras[i][j].nome, nome) == 1)
            {
                SetConsoleTextAttribute(hConsole, 64);
                printf("nome informado nao corresponde com o da reserva \n");
                SetConsoleTextAttribute(hConsole, saved_attributes);
            }
        }
    }
}
// FUNCAO PARA GERAR RELATORIO
void gerarRelatorio(struct reserva cadeiras[3][3])
{
    //cores
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    // salvar estado atual cor
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    FILE *ponteiro_arquivo;
    ponteiro_arquivo = fopen("Relatorio.txt", "w");

    if (ponteiro_arquivo == NULL)
    {
        printf("Erro ao abrir relatorio");
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (cadeiras[i][j].ocupado == 0)
            {
                fprintf(ponteiro_arquivo, "[%d]", cadeiras[i][j].numero);
                if (j == 2)
                {
                    fprintf(ponteiro_arquivo, "\n");
                }
            }
            if (cadeiras[i][j].ocupado == 1)
            {
                fprintf(ponteiro_arquivo, "[%s]", cadeiras[i][j].nome);
            }
            if (cadeiras[i][j].ocupado == 2)
            {
                fprintf(ponteiro_arquivo, "[%s]", cadeiras[i][j].nome);
            }
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (cadeiras[i][j].ocupado == 0)
            {
                fprintf(ponteiro_arquivo, "[RELATORIO RESERVA]\n", cadeiras[i][j].nome);
                fprintf(ponteiro_arquivo, "[%d]",cadeiras[i][j].numero);
                fprintf(ponteiro_arquivo, "[%s - %d]\n", cadeiras[i][j].nome, cadeiras[i][j].numero);
                fprintf(ponteiro_arquivo, "**************************\n");
            }
            if (cadeiras[i][j].ocupado == 1)
            {

                fprintf(ponteiro_arquivo, "[RELATORIO RESERVA]\n", cadeiras[i][j].nome);
                fprintf(ponteiro_arquivo, "[RESERVADO]");
                fprintf(ponteiro_arquivo, "[%s - %d]\n", cadeiras[i][j].nome, cadeiras[i][j].numero);
                fprintf(ponteiro_arquivo, "**************************\n");
            }
            if (cadeiras[i][j].ocupado == 2)
            {
                fprintf(ponteiro_arquivo, "[RELATORIO RESERVA]\n", cadeiras[i][j].nome);
                fprintf(ponteiro_arquivo, "[COMPRADO]");
                fprintf(ponteiro_arquivo, "[%s - %d]\n", cadeiras[i][j].nome, cadeiras[i][j].numero);
                fprintf(ponteiro_arquivo, "**************************\n");
            }
        }
    }

    SetConsoleTextAttribute(hConsole, 32);
    printf("******RELATORIO GERADO COM SUCESSO********\n");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    fclose(ponteiro_dados);
}
void salvarInformacao(struct reserva cadeiras[3][3])
{

    FILE *ponteiro_dados;
    ponteiro_dados = fopen("dados.txt", "w");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            fprintf(ponteiro_dados,"%s %d %d ",cadeiras[i][j].nome,cadeiras[i][j].ocupado,cadeiras[i][j].numero);

        }
    }
    fclose(ponteiro_dados);

}
void carregarInformacao(struct reserva cadeiras[3][3])
{

    FILE *ponteiro_dados;
    ponteiro_dados = fopen("dados.txt", "r");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            fscanf(ponteiro_dados,"%s %d %d ",cadeiras[i][j].nome,&cadeiras[i][j].ocupado,&cadeiras[i][j].numero);
        }
    }
    printf("*****CARREGANDO INFORMACOES**********\n");
    sleep(2);
    printf("*****INFORMACOES CARREGADAS**********\n");
    fclose(ponteiro_dados);
}
