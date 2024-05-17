#ifndef FRACAO_H 
#define FRACAO_H


typedef struct {
    int num;
    int dem;
} Fracao;

//Lista dos nome das funcoes

Fracao criarFracao(int n, int d);
float retornarDecimal(Fracao f);
Fracao somarFracaoes(Fracao f, Fracao g);
Fracao subtrairFracoes(Fracao f, Fracao g);
// Multiplicar fracoes
// Dividir fraoes
void mostrarFracao(Fracao f);

#endif