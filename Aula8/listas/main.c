#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main(){
    Lista *l = criarLista(10);
    Item e1 = {1};
    Item e2 = {9};
    Item e3 = {99};



    inserirElemento(l, e1);
    inserirElemento(l, e2);
    inserirElemento(l, e3);

    printf("Tamanho %d\n", l->tamanho);


    free(l -> array);
    free(l);

    return 0;
}