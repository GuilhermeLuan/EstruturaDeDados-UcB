//Calculo do tamanho da string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO -1234

//String: cadeia de caracteres terminada com \0

int tamanhoString(char *str);

void main(){    
    char str[] = "Flamengo";
    int resultado = tamanhoString(str);
    printf("%d", resultado);
    
}

int tamanhoString(char *str){
    int tamanho;
    for (tamanho = 0; str[tamanho] != '\0'; tamanho++);
    return tamanho;
}
