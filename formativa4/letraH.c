#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
}celula;

//fila encabeçada por f
celula *enfileira (celula *f, int x){
    celula *no1 = malloc (sizeof(celula));
    f -> dado = x;
    no1 -> prox = f -> prox;
    f ->prox = no1;
    f = no1;
    return no1;
}