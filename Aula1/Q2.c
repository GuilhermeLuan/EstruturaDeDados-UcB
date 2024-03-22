#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ERRO -1

int area(int x);

int main(){
    printf("Res: %d", area(2));
    return 0;
}


int area(int lado){
    int soma;
    if(lado == 2 || lado == 3 || lado == 4 || lado == 5) soma = pow(lado, 2);
    else return(ERRO);
}