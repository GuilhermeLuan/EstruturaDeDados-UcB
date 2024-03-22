#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char minusculo();

int main(){
    char letra = minusculo();
    printf("\n%c", letra);

    return 0;
}

char minusculo() {
    char ch = getche(); //Ler apenas um caractere.
    if((ch >= 'A') && (ch <= 'Z') ) return (ch + 32);
    else return ch;
}