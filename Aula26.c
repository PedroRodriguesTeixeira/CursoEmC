#include <stdio.h>
#include <stdlib.h>

int main (void){

    int matriz[5][5] = {{1, 2, 3, 4, 5},
                        {6, 7, 8, 9, 10},
                        {11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20},
                        {21, 22, 23, 24, 25}};

    for (int c = 0; c < 5; ++c){
        for (int l = 0; l < 5; ++l){
            printf("%i", matriz[c][l]);
            printf(" ");
        }
        printf("\n");
    }


    return 0;
}