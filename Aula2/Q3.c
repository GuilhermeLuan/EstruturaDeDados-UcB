//Fatorial
// Fatorial de 5
// 5! = 5 * 4 * 3 * 2 * 1
// (n * n - 1)
#include <stdio.h>
#include <stdlib.h>
#define ERRO -1234

int f(int N);

void main(){
    system("cls");
    int x = f(4);
    printf("Res %d\n", x);
    
}

int f(int N){
    if(N == 0) return 3;
    else if(N > 0) return 2 * f(N - 1) + 5;

}
