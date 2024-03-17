#include <stdio.h>

int main () {

    int contador = 0;


    while (contador != 5) {

        printf("%i", contador);
        ++contador;
        
    }

    // != significa diferente
    // O sinal de igual na liguagem C é (==) ai sim você está comparando
    // O caso (=) diz que você está atribuindo ao valor em questão

    return 0;
}