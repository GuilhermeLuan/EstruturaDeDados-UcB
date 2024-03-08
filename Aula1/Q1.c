#include <stdio.h>
#include <stdlib.h>

char f (int x);

int main(){
    char x = f(2);
    printf("Res: %c", x);
    return 0;
}

char f(int x){
    if (x == 1) return ('C');
    else if (x == 2) return ('D');
    else if (x == 3) return ('E');
    else if (x == 4) return ('B');
    else if (x == 4) return ('E');
}