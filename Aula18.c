#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n1[2], n2[2], media[2];

int main (void) {
    setlocale(LC_ALL, "Portuguese");

for (int i = 0; i <=1; i++){

    printf("=== MÉDIA DE NOTAS ===");
    printf("\n");

    printf("Dig. sua 1º nota:");
    fflush(stdin);
    scanf("%f", &n1[i]);

    printf("Dig. sua 2º nota:");
    fflush(stdin);
    scanf("%f", &n2[i]);


    media[i] = (n1[i] + n2[i])/2;

    }

    system("cls");

    for (int j = 0; j <= 1; j++){


    printf("A sua média final: %.1f\n", media[j]);

    }
 return 0;
}