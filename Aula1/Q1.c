#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char f (int x);

int main(){
    char x = f('D' - 64);
    printf("Res: %c", x);
    return 0;
}

char f(int x){
    if (x == 1) return ('C');
    else if (x == 2) return ('D');
    else if (x == 3) return ('E');
    else if (x == 4) return ('B');
    else if (x == 4) return ('E');
    else {
        printf("A funcao nao esta definida para X = %d", x);
        exit(1);
    }
}

int s(int x){
    return pow(x, 2);
}