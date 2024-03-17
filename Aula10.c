#include <stdio.h>

int main () {

    
    int fatorial = 5;
    int resultado = 1;

    for ( ; fatorial >= 1; --fatorial) {
        /*O "--resultado" significa que será reduzido 1 do valor de fatorial*/
        /* "*=" esse símbolo significa que ele vai duplicar a variável dentro da igualde mutiplicando */
        resultado *= fatorial;
        /* resultado = resultado * fatorial; */

        printf("O nu'mero fatorial e' %i\n", resultado);

    }

    
    
    return 0;
}