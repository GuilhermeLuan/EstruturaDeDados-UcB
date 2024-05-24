#ifndef LISTA_H
#define LISTA_H

#define ERRO_MEMORIA 1

typedef struct{
    int chave;
    //Podem existir outros campos, dependendo da aplicacão.
} Item;

typedef struct{
    int capacidade;
    int tamanho;
    Item *array; //endereco de memoria dos itens da lista
} Lista;

Lista * criarLista(int n);
void inserirItem(Lista *l, Item e); //Inserir 3 no final da lista.
void inserirItemEmPosicao(Lista *l, Item e, int posicao);
void exibirLista(Lista *l);
void excluirItemFinal(Lista *l);
void excluirItem(Lista *l, int posicao);
void combinarLista(Lista *c, Lista *a, Lista *b);

#endif
