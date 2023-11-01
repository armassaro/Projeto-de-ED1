#include <stdio.h>
#include <stdlib.h>

typedef struct Funcionarios{
    char nome[40];
}Funcionarios;

typedef struct No{
    Funcionarios funcionarios;
    struct Lista *proximo, *anterior;
}No;

typedef struct Lista{
    No* Inicio;
}Lista;

int main (){
    Lista lista;

    return 0;
}