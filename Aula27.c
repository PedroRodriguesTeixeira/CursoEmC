#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){

    setlocale(LC_ALL, "Portuguese");

    const int bimestresAnuais = 4;
    const int numerosDeAlunos = 4;
    float notasAlunos[numerosDeAlunos][bimestresAnuais];
    float mediaAluno[numerosDeAlunos];
    float media = 0;

    for(int aluno = 0; aluno < numerosDeAlunos; ++aluno){
        printf("Insira as 4 notas do aluno %d\n", aluno + 1);
        for(int notas = 0; notas < bimestresAnuais; ++notas){
            printf("Nota %d:", notas + 1);
            scanf("%f", &notasAlunos[aluno][notas]);
            media += notasAlunos[aluno][notas];
        }
        mediaAluno[aluno] = media / bimestresAnuais;
        media = 0;
    }

    for(int aluno = 0; aluno < bimestresAnuais; ++aluno){
        printf("\nA média do aluno %d é %.2f\n", aluno + 1, mediaAluno[aluno]);
    }

    return 0;
}