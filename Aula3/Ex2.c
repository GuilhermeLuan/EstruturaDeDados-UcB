//Calculo do tamanho da string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERRO -1

struct Pessoa {
    char nome[100];
    int idade;
    float altura;
    float peso;
};

void exibirPessoa(struct Pessoa pessoa);
struct Pessoa cadastrarPessoa();
float calculoIMC(struct Pessoa p);
void aniversario(struct Pessoa *p);
void cadastrarPessoaV2(struct Pessoa *p);
int main(){
    //sizeof -> Calcula a quantide de bytes do struct Pessoa.
    system("cls");

    //struct Pessoa pessoa = cadastrarPessoa();
    struct Pessoa pessoa;
    cadastrarPessoaV2(&pessoa);
    aniversario(&pessoa);
    exibirPessoa(pessoa);
    printf("\nO IMC eh: %.3f", calculoIMC(pessoa));

}

void exibirPessoa(struct Pessoa pessoa){
    printf("%s %d %.2f %.2f", pessoa.nome, pessoa.idade, pessoa.altura, pessoa.peso);
}

struct Pessoa cadastrarPessoa(){
    struct Pessoa p;

    printf("Nome: ");
    gets(p.nome);
    //scanf("%s", p.nome);
    printf("Idade: ");
    scanf("%d", &p.idade);
    printf("Altura: ");
    scanf("%f", &p.altura);
    printf("Peso: ");
    scanf("%f", &p.peso);

    return p;
}

float calculoIMC(struct Pessoa p){
    return p.peso / (p.altura * p.altura);
}
//P é um ponteiro
void aniversario(struct Pessoa *p){
    p -> idade = p -> idade + 1;
}

void cadastrarPessoaV2(struct Pessoa *p){
    printf("Nome: ");
    gets(p->nome);
    //scanf("%s", p.nome);
    printf("Idade: ");
    scanf("%d", &p->idade);
    printf("Altura: ");
    scanf("%f", &p->altura);
    printf("Peso: ");
    scanf("%f", &p->peso);
}


//Passagem de valor por referencia
//Vantagem: passar o endereção de memoria, temos um processo mais economico e rapido.