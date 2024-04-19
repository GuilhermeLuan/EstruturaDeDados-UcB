//Gerando um vetor 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int *v;
    int tamanho = 200000;
    v = malloc(tamanho * sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) v[i] = rand() % 51;
    for (int i = 0; i < tamanho; i++) printf("%d ", v[i]);
    

}