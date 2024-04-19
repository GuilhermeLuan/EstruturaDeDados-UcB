//Gerando um vetor 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(){
    int *v;
    int tamanho = 100;
    v = malloc(tamanho * sizeof(int));

    srand(time(NULL));

    clock_t inicio = clock();
    for (int i = 0; i < tamanho; i++) v[i] = rand() % 51;
    for (int i = 0; i < tamanho; i++) printf("%d ", v[i]);
    clock_t fim = clock();

    double tempoCPU = ((double) (fim - inicio) )/ CLOCKS_PER_SEC; 

    printf("\nTempo de execucao %lf", tempoCPU);

}
