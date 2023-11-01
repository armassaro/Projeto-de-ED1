#include <stdio.h>
#include <stdlib.h>

typedef struct Funcionarios{
    char nome[40];
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

int main (){
    Lista lista;
    inicializaLista(&lista);
    return 0;
}