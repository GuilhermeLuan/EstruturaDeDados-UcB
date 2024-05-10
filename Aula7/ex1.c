#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    int dem
} Fracao;

//Lista dos nome das funcoes

Fracao criarFracao(int n, int d);
float retornarDecimal(Fracao f);
Fracao somarFracaoes(Fracao f, Fracao g);
Fracao subtrairFracoes(Fracao f, Fracao g);
// Multiplicar fracoes
// Dividir fraoes
void mostrarFracao(Fracao f);


int main(){
    Fracao x = criarFracao(5, 6);
    Fracao y = criarFracao(4, 9);
    Fracao soma = somarFracaoes(x, y);
    mostrarFracao(soma);

}

//Implementar os métodos

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