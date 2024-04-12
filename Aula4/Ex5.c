//Calculo do tamanho da string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){
    FILE *fp;
    int numero;
    char palavra[50];
    fp = fopen("dados.txt", "r"); 

    if(fp == NULL){
        printf("O arquivo não pode ser aberto!");
        exit(1);
    }
    
    printf("Arquivo aberto com sucesso!!!");

    fscanf(fp, "%d %s", &numero, &palavra);

    printf("\n%d %s", numero, palavra);

    fclose(fp);

    return 0;
}