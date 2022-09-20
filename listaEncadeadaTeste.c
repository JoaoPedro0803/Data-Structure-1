#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void imprime_lista (celula *le) {
    celula *p;
    for(p = le->prox; p != NULL; p = p->prox){
        printf("%d -> ", p -> dado);
    }
    printf(" NULL\n");
}

void insereFinal(celula *le, int x) {
    celula *p = malloc(sizeof(celula));
    p -> dado = x;
    p -> prox = NULL;

}

int main (){
    celula *le = malloc(sizeof(celula));
    celula *no1 = malloc(sizeof(celula));
    celula *no2 = malloc(sizeof(celula));
    celula *no3 = malloc(sizeof(celula));


    /*le = malloc(sizeof(celula));
    no1 = malloc(sizeof(celula));
    no2 = malloc(sizeof(celula));
    no3 = malloc (sizeof(celula));*/
    
    no1 -> dado = 10;
    no2 -> dado = 20;
    no3 -> dado = 30;

    
    le -> prox = no1;
    no1 -> prox = no2;
    no2 -> prox = no3;
    no3 -> prox = NULL;


    
    imprime_lista (le);
    insereFinal(le, 5);
    imprime_lista (le);

    return 0;
}