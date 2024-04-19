//Gerando um vetor 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selecao(int *array, int tamnhoArray);


void main(){
    int *v;
    int tamanho = 100;
    v = malloc(tamanho * sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) v[i] = rand() % 21;
    printf("Vetor original: \n");
    for (int i = 0; i < tamanho; i++) printf("%d ", v[i]);
    clock_t inicio = clock();

    selecao(v, tamanho);

    clock_t fim = clock();


    printf("Vetor ordenado: \n");
    for (int i = 0; i < tamanho; i++) printf("%d ", v[i]);


    double tempoCPU = ((double) (fim - inicio) )/ CLOCKS_PER_SEC; 

    printf("\nTempo de execucao %lf", tempoCPU);

}

void selecao(int *array, int tamnhoArray){
    for (int i = 0; i < tamnhoArray - 1; i++)
    {   
        int indiceMenor = i;
        for (int j = i + 1; j < tamnhoArray; j++){
            if(array[j] < array[indiceMenor]) indiceMenor = j;
        }
        int temp = array[i];
        array[i] = array[indiceMenor];
        array[indiceMenor] = temp;
        
    }
    
}