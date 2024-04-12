//Calculo do tamanho da string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct Produto {
    char nome[100];
    int quantidade;
    float valor;
};

int main(){
    FILE *fp;
    fp = fopen("lista.txt", "r"); 
    float totalCompra = 0;
    struct Produto produto;

    if(fp == NULL){
        printf("O arquivo não pode ser aberto!");
        exit(1);
    }
    
    while (fscanf(fp, "%s %d %f", &produto.nome, &produto.quantidade, &produto.valor) != EOF)       
    {   
        float valorTotal = produto.quantidade * produto.valor;
        printf("\n 1) %s: %d * %.2f = %.2f", produto.nome, produto.quantidade, produto.valor, valorTotal);
        totalCompra = totalCompra + valorTotal;

    }
    printf("\n");
    printf("O valor total da compra eh %.2f", totalCompra);
    

    fclose(fp);

    return 0;
}