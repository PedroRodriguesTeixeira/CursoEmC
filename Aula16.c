#include<stdio.h>
#include<stdlib.h>

int main (){

    int numero, cifra;

    printf("Insira o número que você deseja converter:");
    scanf("%i", numero);

    if (numero >= 0) {
        do {
            cifra = numero % 10;
            printf("%i", cifra);
            numero /= 10;
        }while (cifra != 0) {
            printf("\n")
        }
        
    }

    return 0;
}