#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox; 
}celula;

celula *cria_pilha(){
    celula *p = malloc(sizeof(celula));
    p -> prox = NULL;
}

int empilha(celula *topo, int x){
    celula *novo = malloc(sizeof(celula));
    if (novo == NULL) return 0;
    novo -> dado = x;
    novo -> prox = topo -> prox;
    topo -> prox = novo;
    return 1;
}
int desempilha(celula *p, int *y){
    celula *lixo = p -> prox;
    if (lixo == NULL){
      printf("deu erro");
      return 0;  
    }else{
        *y = lixo -> dado; 
        p -> prox = lixo -> prox;
        free(lixo);
        printf("desempilhado");
        return 1;    
    } 
}

int main (){
    int y = 2;
    celula *p = cria_pilha();
    empilha(p, 1);
    empilha(p, 2);
    empilha(p, 3);
    empilha(p, 4);

    desempilha(p, &y);

    return 0;
}