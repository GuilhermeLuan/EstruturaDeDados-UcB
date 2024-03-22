//Versao fatorial recursiva
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
    if (N == 0) return (1);
    else if (N > 0) return (N* fatorial(N - 1));
    else return (ERRO);

}
