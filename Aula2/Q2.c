//Fatorial
// Fatorial de 5
// 5! = 5 * 4 * 3 * 2 * 1
// (n * n - 1)
#include <stdio.h>
#include <stdlib.h>
#define ERRO -1234

int fatorial(int N);

void main(){
    system("cls");
    int N;
    int F;
    printf("Digite um valor: ");    
    scanf("%d", &N);
    F = fatorial(N);
    if (F != ERRO) printf("Res: %d\n", F);
    else printf("Nao existe esse fatoria");
    
}

int fatorial(int N){
    int R = 1; 
    if (N >= 0){
        for (int i = N; i > 0; i--) R = R * i;
        return R;
    }
    else{
        return(ERRO);
    }

}
