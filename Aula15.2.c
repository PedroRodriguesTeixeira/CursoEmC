#include <stdio.h>
#include <stdlib.h>

main (void) {

    int num1, num2;

    printf("Dig. dois números inteiros:");
    fflush(stdin);
    scanf("%i %i", &num1, &num2);

    system("cls");

    if(num2 == 0) {
        printf("Divisão por 0 não é permitida!\n");
    } else {
        if (num1 % num2 == 0)
        printf("%i é divisível por %i\n", num1, num2);
        else 
        printf("%i não é divisível por %i\n", num1, num2);
    } 


    return 0;
}