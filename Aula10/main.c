#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

int main(){
    Pilha *X = criarPilha();
    printf("Teste 01: \n");
    printf("Tamanho pilha: %d \n", X->Tamanho);
    printf("Endereco de topo: %d \n", &X->Topo);
    printf("Valor em topo: %d \n", X->Topo);
    printf("\n");


    Item *E1 = criarItem(13);

    printf("Teste 02: Criando um item... \n");
    printf("Chave: %d \n", E1->Chave);
    printf("Endereco de E1: %d \n", &E1);
    printf("\n");

    Item *E2 = criarItem(20);

    printf("Teste 03: Criando um item... \n");
    printf("Chave: %d \n", E2->Chave);
    printf("Endereco de E2: %d \n", &E2);
    printf("\n");

    Item *E3 = criarItem(47);

    printf("Teste 04: Criando um item... \n");
    printf("Chave: %d \n", E3->Chave);
    printf("Endereco de E3: %d \n", &E3);
    printf("\n");


    Item *E4 = criarItem(53);

    printf("Teste 05: Criando um item... \n");
    printf("Chave: %d \n", E4->Chave);
    printf("Endereco de E4: %d \n", &E4);
    printf("\n");


    empilhar(X, E1);
    empilhar(X, E2);
    empilhar(X, E3);
    empilhar(X, E4);

    printf("Teste 06: empilhando alguns elementos \n");
    printf("Tamanho: %d \n", X->Tamanho);
    printf("Ultimo elemento: %d \n", X->Topo->Chave);
    printf("\n");


    int T = desempilhar(X);
    
    printf("Teste 07: desempilahndo um elemento\n");
    printf("Tamanho: %d \n", X->Tamanho);
    printf("Ultimo elemento: %d \n", X->Topo->Chave);
    printf("\n");

    int Op1 = desempilhar(X);
    int Op2 = desempilhar(X);
    int Resultado = Op1 + Op2;
    Item *E5 = criarItem(Resultado);
    empilhar(X, E5);

    
    printf("Teste 08: empilhando resultado \n");
    printf("Tamanho: %d \n", X->Tamanho);
    printf("Ultimo elemento: %d \n", X->Topo->Chave);
    printf("\n");

}