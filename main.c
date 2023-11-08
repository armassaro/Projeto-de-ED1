//Atividade Avaliativa de ED1
//Dupla: Michel Lima/ Arthur Romano

/* Crie um sistema de gerenciamento de informa ̧c ̃oes de funcion ́arios de uma empresa seguindo criteriosa-
mente os requisitos solicitados neste documento. Primeiramente, ao iniciar o programa, deve ser lido um

arquivo.csv1

contendo as informa ̧c ̃oes sobre os funcion ́arios (sugest ̃ao de organiza ̧c ̃ao na Figura 1), como
nome completo, endere ̧co, data de nascimento e sal ́ario. Em seguida, vocˆe armazenar ́a essas informa ̧c ̃oes
em uma lista duplamente encadeada ordenada por nome (veja o exemplo da Figura 2). Ap ́os construir a
lista duplamente encadeada, vocˆe permitir ́a ao usu ́ario escolher entre as seguintes op ̧c ̃oes:
• Pesquisar os funcion ́arios na lista por intervalo salarial: o usu ́ario deve digitar o valor m ́ınimo e
o m ́aximo (valormin ≤ valormax), e, com isso, deve-se imprimir em tela as informa ̧c ̃oes (nome,
endere ̧co, sal ́ario, nascimento) dos funcion ́arios que recebem o sal ́ario dentro desta faixa de valor;
• Exibir a lista de funcion ́arios ordenados por nome de A-Z: exibir em ordem alfab ́etica o nome e
todas as informa ̧c ̃oes (endere ̧co, sal ́ario, nascimento) dos funcion ́arios;
• Exibir a lista de funcion ́arios ordenados por nome de Z-A: similar a especifica ̧c ̃ao anterior, por ́em
em ordem Z-A;
• Transformar a lista duplamente encadeada em uma  ́arvore AVL (organizando-a por dias vividos
de cada pessoa): caso escolha esta op ̧c ̃ao, a sua lista deixar ́a de existir, pois cada elemento da
lista se transformar ́a em um n ́o/elemento da AVL (veja o exemplo da Figura 3). Para realizar esta
implementa ̧c ̃ao vocˆe NAO deve alocar mem ́oria novamente, apenas ocorrer ́a uma reorganiza ̧c ̃ao dos  ̃
elementos. Ao selecionar este caminho, um novo menu deve ser exibido aos usu ́arios do sistema,
permitindo que escolha executar as seguintes op ̧c ̃oes:
– Pesquisar funcion ́arios na  ́arvore AVL por intervalo salarial: o usu ́ario deve digitar o valor
m ́ınimo e o m ́aximo (valormin ≤ valormax), e, com isso, deve-se imprimir em tela as informa ̧c ̃oes
(nome, endere ̧co, sal ́ario, nascimento) dos funcion ́arios que recebem o sal ́ario dentro desta faixa
de valor;
– Imprimir a lista de funcion ́arios (todas as informa ̧c ̃oes) ordenada por idade, come ̧cando do mais
jovem, at ́e chegar ao mais velho (n ̃ao utilizar nenhuma outra estrutura de dados auxiliar);
– Imprimir a lista de funcion ́arios ordenada por idade, come ̧cando do mais velho, at ́e chegar ao
mais jovem (n ̃ao utilizar nenhuma outra estrutura de dados auxiliar);

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Arvore {

    No *raiz;

}Arvore;

typedef struct No {

    int chave;
    struct No *esquerda, *direita;

}No;

typedef struct Funcionarios{
    char nome[40];
    int salario;
    char endereco[40];
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

void pesquisaAZ(Lista *lista) {


}

void pesquisaZA(Lista *lista) {


}

void pesquisaSalario(No *no, float min, float max) {

    if(no == NULL) {

        return;

    }
    else {

        if(no->funcionarios.salario > min && no->funcionarios.salario < max) {

            printf("Funcionario: %s\n", no->funcionarios.nome);
            printf("Salário: %f\n", no->funcionarios.salario);
            printf("Endereço: %s", no->funcionarios.endereco);
            printf("Data de nascimento: %i/%i/%i\n\n", no->funcionarios.data.dia, no->funcionarios.data.mes, no->funcionarios.data.ano);

        }

        pesquisaSalario(no->proximo, min, max);

    }

}

void transformaLista(Lista *lista, Arvore *arvore) {


}


int main() {

    Lista lista;
    
    Arvore arvore;
    arvore.raiz = NULL;
    
    inicializaLista(&lista);
    
    do {

        int escolha;
        printf("Digite o que deseja fazer:\n");
        printf("1 - Pesquisar funcionários por intervalo salarial\n");
        printf("2 - Exibir lista de funcionários ordenados por nome de A a Z\n");
        printf("3 - Exibir a lista de funcionários ordenados por nome de Z a A\n");
        printf("4 - Transformar a lista duplamente encadeada em árvore AVL\n");
        printf("R: ");
        scanf("%i", &escolha);

        switch(escolha) {

            case 1:
            int min, max;
            do {

                printf("Digite abaixo o valor mínimo do intervalo: ");
                scanf("%i", &min);
                printf("Digite abaixo o valor máximo do intervalo: ");
                scanf("%i", &max);

                if(min > max) {

                    printf("Valores mínimo e máximo inválidos! Digite novamente\n");

                }

            }while(min > max);

            pesquisaSalario(&lista, min, max);
            break;

            case 2:
            pesquisaAZ(&lista);
            break;

            case 3:
            pesquisaZA(&lista);
            break;

            case 4:
            transformaLista(&lista, &arvore);
            break;

            default:
            printf("Opção inválida\n");
            break;


        }while(1);

    return 0;

}