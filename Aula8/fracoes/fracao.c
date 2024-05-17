#include <stdio.h>
#include <stdlib.h>

#include "fracao.h"

Fracao criarFracao(int n, int d){ //construdor do Javinha
    Fracao f;
    f.num = n;
    f.dem = d;
    return f;
}

float retornarDecimal(Fracao f){
    return f.num / f.dem;
}

Fracao somarFracaoes(Fracao f, Fracao g){
    Fracao R;
    R.num = f.num * g.dem + g.num * f.dem;
    R.dem = f.dem * g.dem;
    return R;
}

Fracao subtrairFracoes(Fracao f, Fracao g){
        Fracao R;
    R.num = f.num * g.dem - g.num * f.dem;
    R.dem = f.dem * g.dem;
    return R;
}

void mostrarFracao(Fracao f){
    printf("%d/%d", f.num, f.dem);
}