#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

Lista * criarLista(int capacidade){
    Lista *l = (Lista *) malloc (sizeof(Lista));
    if(l == NULL){
        printf("Erro ao alocar memoria para a lista");
        exit(ERRO);
    }

    l -> array = (Item *) malloc(capacidade * sizeof(Item));

    if(l -> array == NULL){
        printf("Erro ao alocar memoria para a lista");
        free(l);
        exit(ERRO);
    }

    l -> capacidade = capacidade;
    l -> tamanho = 0;
}

void inserirElemento(Lista *lista, Item elemento){
    if(lista ->tamanho >= lista -> capacidade){
        printf("A lista está cheia");
        return;
    }
    lista -> array[lista -> tamanho] = elemento;
    lista -> tamanho++;

}