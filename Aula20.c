#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (void) {
    setlocale(LC_ALL, "Portuguese");

    const int bimestresAnuais = 4;
    const int numeroDeAlunos = 4;

    float notasAlunos[numeroDeAlunos][bimestresAnuais];
    float mediasAlunos[numeroDeAlunos];

    float media = 0;

    printf("INSIRA 4 NOTAS DO ALUNO 1:");

    for(int aluno = 0; aluno < numeroDeAlunos; ++aluno) {
        for(int notas = 0; notas < bimestresAnuais; ++notas){
            scanf("%f", &notasAlunos[aluno][notas]);
            media += notasAlunos[aluno][notas];
        }
        printf("\n");

        mediasAlunos[aluno] = media / bimestresAnuais;
        media = 0; //resetando a variável média.
        printf("INSIRA AS 4 NOTAS DO ALUNO %i:", aluno + 2);
    }

    for(int aluno = 0; aluno < numeroDeAlunos; ++aluno){
        printf("A media do aluno %i é %.1f\n", aluno + 1, mediasAlunos[aluno]);
    }
    return 0;
}