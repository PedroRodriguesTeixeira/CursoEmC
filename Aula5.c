#include <stdio.h>

int main ()
{

    int base;
    int altura;
    int area;

    printf("=== BEM VINDO AO PROGRAMA QUE CALCULA A AREA!!");
    printf("Digite o valor da base:\n");
    scanf("%i", &base);
    printf("Digite o valor da altura:\n");
    scanf("%i", &altura);

    area = base * altura;

    printf("\n");
    printf("O valor da área é igual a: %i", area);
    printf("\n");


    return 0;
}
