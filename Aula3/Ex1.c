//Calculo do tamanho da string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO -1

int main(){
    int M[3][3] = {
        {1, 4, 3},
        {2, 1, 2},
        {0, 5, 6}
    };

    int det = 0;

    det += M[0][0] * M[1][1] * M[2][2];
    det += M[0][1] * M[1][2] * M[2][0];
    det += M[0][2] * M[1][0] * M[2][1];
    det -= M[2][0] * M[1][1] * M[0][2];
    det -= M[2][1] * M[1][2] * M[0][0];
    det -= M[2][2] * M[1][0] * M[0][1];

    printf("%d", det);
}