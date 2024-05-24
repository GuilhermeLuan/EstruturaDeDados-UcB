#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

Lista * criarLista(int n){

    Lista *L = (Lista *) malloc(sizeof(Lista));
    if(L == NULL){
        printf("ERRO: Não foi possivel alocar memória para a moldura da lista!\n");
        exit(ERRO_MEMORIA);
    }

    L->array = (Item * ) malloc(n * sizeof(Item));

    if(L->array == NULL){
        printf("ERRO: Não foi possivel alocar memoria para o vetor de itens\n");
        free(L);
        exit(ERRO_MEMORIA);
    }

    L->capacidade = n;
    L->tamanho = 0;

    return L;

}
/*
 - Verificar se existe espaco disponivel na lista
 - Se tiver, inserir item
 - Incrementar contador da lista

*/

void inserirItem(Lista *l, Item e){
    if(l->tamanho == l->capacidade){
        printf("ERRO: A lista esta cheia\n");
        return;
    }
    l->array[l->tamanho] = e;
    l->tamanho++;

}

void exibirLista(Lista *l){
    for (int i = 0; i < l->tamanho; i++) printf("%d ", l->array[i].chave); 
    printf("\n");
}

void excluirItemFinal(Lista *l){
    (l->tamanho)--;
}

/*
 1) Posicao deve ser valida
 2) Exclusao se dara por sobrescrita de valores
 3) 
*/

void excluirItem(Lista *l, int posicao){
    if (posicao < 0 || posicao >= l->tamanho)       
    {
        printf("ERRO: a posicao do elemento nao e valida");
        return;
    }
    for (int i = posicao; i < l->tamanho ; i++) l->array[i] = l->array[i+1];
    l->tamanho--;
    
}

void inserirItemEmPosicao(Lista *l, Item e, int posicao){
    if (posicao < 0 || posicao >= l->tamanho)       
    {
        printf("ERRO: a posicao do elemento nao e valida");
        return;
    }

    if(l->tamanho == l->capacidade){
        printf("ERRO: A lista esta cheia\n");
        return;
    }

    for (int i = l->tamanho; i >= posicao ; i--) l->array[i] = l->array[i];
    l->array[posicao] = e;
    l->tamanho++;
}

void combinarLista(Lista *c, Lista *a, Lista *b){
    for (int i = 0; i < a -> tamanho; i++) inserirItem(c, a->array[i]);
    for (int i = 0; i < b -> tamanho; i++) inserirItem(c, b->array[i]);


}
