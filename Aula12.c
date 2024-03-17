#include <stdio.h>

int main (void) {

    int idade;

    printf("Informe o valor da sua idade:");
    scanf("%i", &idade);


    if (idade <= 18)
    {
    printf("Bedidas alcoólicas estão proíbidas!%n");
    } else {
        printf("Bebidas alcoólicas estão liberadas!");
    }
    


    return 0;
}