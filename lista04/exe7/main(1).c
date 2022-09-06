#include <stdlib.h>
// Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a
//R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X
int main()
{
    printf("Exercicio 8 lista 4!\n");
    int a[5],b[10],x[5];
    int c=0;
    for (int i=0;i<5;i++){
    printf("defina os elementos de a");
    scanf("%d",&a[i]);
}
    for(int i=0;i<10;i++){
    printf("defina os elementos de b");
    scanf("%d",&b[i]);
    }
    for(int i=0;i<=10;i++){
            for(int j=0;j<=10;j++){
                if(a[i] == b[j]){
                    x[c]=a[i];
                }
            }
            if(a[i] == b[i]){
            x[c]=a[i];
            c++;
            }
    }
    for(int i=0;i<c;i++){

           printf(" %d ",x[i]);
    }
    return 0;
}
