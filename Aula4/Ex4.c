//Calculo do tamanho da string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){
    FILE *fp;

    fp = fopen("pagina.txt", "w");

    if(fp == NULL){
        printf("O arquivo não pode ser aberto!");
        exit(1);
    }
    
    printf("Arquivo aberto com sucesso!!!");
    fprintf(fp, "muadih eh muito humilde!\n");
    fprintf(fp, "Eh o lisan al gaib nao tem jeito\n");

    fclose(fp);

    return 0;
}