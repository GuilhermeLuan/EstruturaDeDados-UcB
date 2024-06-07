#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

Pilha * criarPilha(){
    Pilha *P = (Pilha *) malloc(sizeof(Pilha));
    
    if(P == NULL){
        printf("ERRO: Nao foi possivel alocar memoria para a pilha");
        exit(ERRO_MEMORIA);
    }

    P->Tamanho = 0;
    P->Topo = NULL;
    return P;
}

Item * criarItem(int C){
    Item *I = (Item *) malloc(sizeof(Item));
    if (I == NULL){
        printf("ERRO: Nao foi possivel alocar memoria para o item!");
        exit(ERRO_MEMORIA);
    }
    I->Chave = C;
    I->Anterior = NULL;
}

void empilhar(Pilha *P, Item *I){
    I->Anterior = P->Topo;
    P->Topo = I;
    P->Tamanho++;
}

int desempilhar(Pilha *P){
    if(P->Tamanho == 0){
        printf("ERRO: pilha vazia!");
        exit(ERRO_MEMORIA);
    }

    Item *I = P->Topo;
    int C = I->Chave;
    P->Topo = I->Anterior;

    free(I);
    P->Tamanho--;
    return C;
}