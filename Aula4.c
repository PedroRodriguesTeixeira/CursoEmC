#include <stdio.h>

int main ()
{
    int minhaIdade = 30;
    int Idademae = 50;
    int Idadepai = 60;
    int irmaoIdade = 15;

    int idadeTotal;

    idadeTotal = (minhaIdade * Idademae + Idadepai + irmaoIdade) / 4;
    printf("%i\n", idadeTotal);

    return 0;
}