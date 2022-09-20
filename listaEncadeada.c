#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void imprime (celula *le){
    celula *p;
    for(p = le->prox; p != NULL; p = p->prox){
        printf ("%d -> ", p->dado);
    }
    printf("NULL\n");
}

void imprime_rec (celula *le){
    if (le -> prox == NULL)
        printf("NULL\n");
    else{
        celula *p = le -> prox;
        printf("%d -> ", p -> dado);
        imprime_rec (p);
    }
}

celula *busca (celula *le, int x){
    celula *p;
    for(p = le->prox; p != NULL && p -> dado != x; p = p->prox);
    return p;
}

celula *busca_rec(celula *le, int x){
    if (le -> prox == NULL) return NULL;
    else if (le -> prox -> dado == x) return le -> prox;
    else return busca_rec(le -> prox, x);
}

void insere_inicio(celula *le, int x){
    celula *novo = malloc(sizeof(celula));
    novo -> dado = x;
    novo -> prox = le -> prox;
    le -> prox = novo; 
}

void insere_antes(celula *le, int x, int y){
    celula *p;
    for (p = le; p -> prox != NULL && p -> prox -> dado != y; p = p -> prox);
    insere_inicio(p, x);
}

int remove_depois(celula *p){
    celula *lixo = p -> prox;
    if (lixo != NULL){
        int y = lixo -> dado;
        p -> prox = lixo -> prox;
        free (lixo);
        return y;
    }
}

int remove_elemento(celula *le, int x) {
    celula *p;
    for (p = le; p -> prox != NULL && p -> prox -> dado != x; p = p -> prox);
    remove_depois(p);
}

int remove_todos_elementos(celula *le, int x) {
     celula *p, *p2;
     do {

        for (p = le; p -> prox != NULL && p -> prox -> dado != x; p = p -> prox);
        p2 = p -> prox;
        remove_depois(p);
     } while(p2 != NULL);

}

int main (){
    celula le, no1, no2, no3, no4, no5, no6, no7, no8;
    no1.dado = 1;
    no2.dado = 2;
    no3.dado = 3;
    no4.dado = 3;
    no5.dado = 4;
    no6.dado = 4;
    no7.dado = 5;
    no8.dado = 5;


    le.prox = &no1;
    no1.prox = &no2;
    no2.prox = &no3;
    no3.prox = &no4;
    no4.prox = &no5;
    no5.prox = &no6;
    no6.prox = &no7;
    no7.prox = &no8;
    no8.prox = NULL;

    // teste das funções de imprimir a lista
    imprime_rec(&le);
    imprime (&le);

    // teste na main para a função da busca
    celula *retorno = busca (&le, 4);
    if (retorno == NULL)
        printf("Elemento nao encontrado\n");
    else{
        printf("Elemento encontrado, endereco do no: %p\n", retorno);
    }

    // teste na main para a função da busca recursiva
    celula *retorno2 = busca_rec (&le, 1);
    if (retorno2 == NULL)
        printf("Elemento nao encontrado\n");
    else{
        printf("Elemento encontrado, endereco do no: %p\n", retorno2);
    }
    
    // teste para inserir o elemento no inicio da lista encadeada.
    int k = 0;
    insere_inicio(&le, k);
    imprime (&le);

    // teste para inserir o elemento antes
    int x, y;
    printf("Digite o numero que vc deseja inserir: ");
    scanf ("%d", &x);
    printf("Antes de qual numero? ");
    scanf ("%d", &y);
    insere_antes(&le,x, y);
    printf("Elemento inserido com sucesso! Assim ficou a sua lista: \n");
    imprime(&le);

    // teste para remover a primeira ocorrência do elemento 
    printf("Remover a primeira ocorrencia do elemento\n");
    printf("Digite o numero a ser removido: ");
    scanf ("%d", &x);
    remove_elemento(&le, x);
    imprime(&le);

    // teste para remover todas as ocorrências do elemento 
    printf("Remover todas as ocorrencias do elemento\n");
    printf("Digite o numero a ser removido: ");
    scanf ("%d", &x);
    remove_todos_elementos(&le, x);

    imprime(&le);


   return 0;
}