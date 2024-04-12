//Calculo do tamanho da string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO -1


void exibirArray(int array[], int tamanho);
void modificarArray(int *array, int tamanho);
int *criarArray(int tamanho);

int main(){
    int array[] = {5, 1, 9, 4, 8, 3};
    int tamanhoArray = sizeof(array) / sizeof(array[0]);
    //int tamanhoArray = sizeof(array) / sizeof(int);

    exibirArray(array, tamanhoArray);
    modificarArray(array, tamanhoArray);
    exibirArray(array, tamanhoArray);
    



    return 0;
}

void exibirArray(int array[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    
}

void modificarArray(int *array, int tamanho){
    printf("Endereco: %d\n", array);
    for (int i = 0; i < tamanho; i++)
    {
        array[i] *= 2;
    }    
}

int *criarArray(int tamanho){
    int *array = malloc(tamanho * (sizeof(int))); //Alocação dinamica
    for (int i = 0; i < tamanho; i++) array[i] = 2 * i - 1;
    return array; //indica o endereco de memoria do vetor.
    
}
//Passagem de valor por referencia
//Vantagem: passar o endereção de memoria, temos um processo mais economico e rapido.