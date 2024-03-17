#include <stdio.h>
#include <stdlib.h>

    int numero1;
    int numero2;
    int soma;

main (void) {


    printf("Dig. um número:");
    scanf("%i", &numero1);

    printf("Dig. o segundo número:");
    scanf("%i", &numero2);

    system("cls");

    if(numero2 == 0) {
        printf("Divisão por 0 não permitida!\n");
    }
    else {
        if(numero1 % numero2 ==0) {
            printf("O número %i é divisível por %i", numero1, numero2);
        }
        else {
            printf("O número %i não é divisível por %i", numero1, numero2);
        }
    }


    return 0;
}