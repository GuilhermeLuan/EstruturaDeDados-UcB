#ifndef LISTA
#define LISTA

#define ERRO 1

typedef struct{
    int chave;
} Item;

typedef struct {
    int capacidade;
    int tamanho;
    Item *array;
} Lista;

Lista * criarLista(int capacidade); //* retorna o endereco de memoria da lista
void inserirElemento(Lista *Lista, Item elemento);

#endif
