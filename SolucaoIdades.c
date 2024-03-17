#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int idade, idade2;
char nome1[40], nome2[40];
float idadeMedia;

int main (){

    setlocale(LC_ALL, "PT-BR");

    printf("Dados da primeira pessoa: ");
    getchar();
    fgets(nome1, 40, stdin);
    printf("Idade: ");
    scanf("%i", &idade);

    printf("\n");

    printf("Dados da segunda pessoa: ");
    getchar();
    fgets(nome2, 40, stdin);
    printf("Idade: ");
    scanf("%i", &idade2);


    idadeMedia = (double)(idade + idade2) / 2;

    printf("Idade média de %s e %s é de %.1f", nome1, nome2, idadeMedia);


    return 0;
}