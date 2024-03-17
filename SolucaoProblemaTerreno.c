#include <stdio.h>
#include <stdlib.h>

int main () {

    float lg_terreno, comp_terreno, mquadrado, area_terreno, valor_terreno;

    printf("Digite a largura do terreno:");
    scanf("%f", &lg_terreno);

    printf("Digite o comprimento do terreno:");
    scanf("%f", &comp_terreno);

    printf("Digite o valor do metro quadrado:");
    scanf("%f", &mquadrado);

    system("cls");

    area_terreno = lg_terreno * comp_terreno;
    valor_terreno = area_terreno * mquadrado;

    printf("A area do terreno: %.1f", area_terreno);
    printf("O valor do terreno: %.2f", valor_terreno);


    return 0;
}