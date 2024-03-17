#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main (void) {
    setlocale(LC_ALL, "Portugues");
    int i;

    printf("Escreva um número de 1 a 2:");
    scanf("%i", &i);

    switch (i) {
        case 1:
            printf("Você escolheu o número 1\n");
            break;
        case 2:
        printf("Você escolheu o número 2\n");
            break;
        default:
        printf("Opção inválida\n");
    }
    
    
    return 0;
}