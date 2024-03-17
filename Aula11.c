#include <stdio.h>

int main () {

    int i = 0;


    /*Caso a condição não seja aceita ele não executa, ou seja, ele lê depois executa*/
    while (i != 0)
    {
        printf("Teste");
    }
    /*Ele executa e depois lê a condição, ou seja, ele tem margem pra rodar pelo menos 1x*/
    do {
        printf("Olá mundo!\n");
    } while (i != 0 );



    return 0;
}