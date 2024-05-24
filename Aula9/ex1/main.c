#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main(){
    Lista *a = criarLista(10);
    Lista *b = criarLista(15);
    Lista *c = criarLista(25);


    printf("Teste 01: ");
    printf("Tamanho da lista: %d \n", a -> capacidade);


    Item e1 = {13};
    inserirItem(a, e1);

    Item e2 = {2};
    inserirItem(a, e2);

    Item e3 = {44};
    inserirItem(a, e3);

    Item e4 = {54};
    inserirItem(a, e4);

    Item e5 = {90};
    inserirItem(a, e5);

    printf("Teste 03: inserindo itens");
    printf("Tamanho da lista passou a ser: %d \n", a -> tamanho);

    printf("Teste 04: exibir lista ");
    exibirLista(a);

    inserirItem(a, (Item) {999});
    
    printf("Teste 05: (inserindo item 999) ");
    exibirLista(a);

    printf("Teste 05: excluir o ultimo elemento ");
    excluirItemFinal(a);
    exibirLista(a);

    printf("Teste 06: excluir o primeiro elemento ");
    excluirItem(a, 0);
    exibirLista(a);

    printf("Teste 07: inserindo elemento na posicao 2: ");
    inserirItemEmPosicao(a, (Item) {777}, 2);
    exibirLista(a);

    inserirItem(b, (Item){-1});
    inserirItem(b, (Item){-9});
    inserirItem(b, (Item){-13});
    inserirItem(b, (Item){79});

    
    printf("Teste 08 (concatenando listas): ");
    combinarLista(c, a, b);
    exibirLista(c);

}
