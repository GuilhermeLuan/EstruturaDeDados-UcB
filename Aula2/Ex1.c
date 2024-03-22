//Fatorial
// Fatorial de 5
// 5! = 5 * 4 * 3 * 2 * 1
// (n * n - 1)
#include <stdio.h>
#include <stdlib.h>
#define ERRO -1234

int g(int N);

void main(){
    system("cls");
    int x = g(3);
    printf("Res %d\n", x);
    
}

int g(int N){
    if(N == 0) return -1;
    else if(N > 0) return 4 * g(N - 1) + 6;

}
