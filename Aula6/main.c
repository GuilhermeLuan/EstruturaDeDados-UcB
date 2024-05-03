#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TAMANHO 40000
#define VERDADEIRO 1
#define FALSO 0

struct Testes {
    double test1;
    double test2;
    double test3;
} typedef TESTES;



void swap(int *a, int *b);
int particao(int vetor[], int inf, int sup);
void quickSort(int vetor[], int inf, int sup);

void main(){
    //int v[] = {3, 6, 4, 5, 1, 7, 2};
    //int t = sizeof (v) / sizeof (v[0]);

    TESTES testes;
    double tempoCPU;

    int *v;
    v = malloc(TAMANHO * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        for (int i = 0; i < TAMANHO; i++) v[i] = rand() % 40000;

        clock_t inicio = clock();
        quickSort(v, 0, TAMANHO - 1);
        clock_t fim = clock();

        for (int i = 0; i < TAMANHO; i++)
        {
            printf("%d ", v[i]);
        }

        tempoCPU = ((double) (fim - inicio) )/ CLOCKS_PER_SEC; 
        
        printf("\nTempo de execucao %lf", tempoCPU);



    }

    
    



}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particao(int vetor[], int inf, int sup){
    int pivot = vetor[(inf + sup) / 2];
    int i = inf - 1;
    int j = sup + 1;

    while (VERDADEIRO)
    {
        do {i++;} while (vetor[i] < pivot);
        do {j--;} while (vetor[j] > pivot);
        if(i >= j) return i;
        swap(&vetor[i], &vetor[j]);
        
        
    }
    
}

void quickSort(int vetor[], int inf, int sup){
    if(inf < sup) {
        int p = particao(vetor, inf, sup); //posicao do pivot
        quickSort(vetor, inf, p - 1); //Antes do pivot
        quickSort(vetor, p + 1, sup); //Depois do pivot
    }


}
