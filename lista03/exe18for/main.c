#include <stdio.h>
#include <stdlib.h>

int main()
{
//    18. Escreva um algoritmo que leia a quantidade de alunos em uma turma. Em seguida,
//  a) para cada aluno, leia a informação de suas 2 notas, calcule a média e informe se o
//   aluno está aprovado ou reprovado. O aluno está aprovado apenas se a sua média for maior
//  ou igual a 6.
    printf("Exercicios 18 Lista!\n");

    int qntaluno,alunos[999],nota1[101],nota2[101],total[101],i=0;

        printf("Informe a quantidade de alunos na turma : ");
        scanf("%d",&qntaluno);

        for(i=1;i<=qntaluno;i++){
            printf("\nInforme a primeira nota : ");
            scanf("%d",&nota1[i]);
            printf("\nInforme a segunda nota : ");
            scanf("%d",&nota2[i]);

            total[i]=(nota1[i]+nota2[i])/2;

         if (total[i]>=60){
            printf("O Aluno [ %d ] esta [APROVADO] e nota final [ %d ]",i,total[i]);
        }if(total[i]<60){
            printf("O Aluno [ %d ] esta [REPROVADO] e nota final [ %d ]",i,total[i]);
        }
        }

    return 0;
}
