#ifndef PILHA_H
#define PILHA_H

#define ERRO_MEMORIA 1

typedef struct Item{
    int Chave;
    struct Item * Anterior;

} Item;

typedef struct Pilha{
    int Tamanho;
    struct Item * Topo;
} Pilha;

Pilha * criarPilha();
Item * criarItem(int C);
void empilhar(Pilha *P, Item *I);
int desempilhar(Pilha *P);



#endif