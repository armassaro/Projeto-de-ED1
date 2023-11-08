//Atividade Avaliativa de ED1
//Dupla: Michel Lima/ Arthur Romano

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Data{
    int dia, mes, ano;
}Data;

typedef struct Funcionarios{
    char nome[40];
    char endereco[40];
    Data datanascimento;
    float salario;
}Funcionarios;

typedef struct No{
    Funcionarios funcionarios;
    struct No *proximo, *anterior;
}No;

typedef struct Lista{
    No* inicio;
    int tamanhoLista;
}Lista;

void inicializaLista(Lista* lista){
    lista->inicio = NULL;
    lista->tamanhoLista = 0;
}

void lercsv(Lista* lista){
    No *aux = (No*) malloc (sizeof(No));
    //FILE *arquivo = fopen(,"r");

}

int main (char argc[], int argv){
    Lista lista;
    printf("\n%s\n",argv[1]);
    inicializaLista(&lista);
    //lercsv(&lista);
    return 0;
}