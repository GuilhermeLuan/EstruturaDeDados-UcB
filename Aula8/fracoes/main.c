#include <stdio.h>
#include <stdlib.h>

#include "fracao.h"


int main(){
    Fracao x = criarFracao(5, 6);
    Fracao y = criarFracao(4, 9);
    Fracao soma = somarFracaoes(x, y);
    mostrarFracao(soma);

    return 0;
}
