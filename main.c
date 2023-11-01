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
    No* Inicio;
    int tamanhoLista;
}Lista;

void inicializaLista(Lista* lista){
    lista->Inicio = NULL;
    lista->tamanhoLista = 0;
}

int main (){
    Lista lista;
    inicializaLista(&lista);
    return 0;
}