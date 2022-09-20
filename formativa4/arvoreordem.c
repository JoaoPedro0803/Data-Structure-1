#include <stdio.h>
#include <stdlib.h>

typedef struct no {
int dado;
struct no *esq, *dir;
} no;

typedef struct celula {
  struct no *dado;
  struct celula *prox;
} celula;


void empilha(celula **p, no *n){ // Coloca nó na pilha
	celula *novo = malloc(sizeof(celula));
	novo -> dado = n;
	novo -> prox = *p;
	*p = novo;
}

int *desempilha(celula **p){
  celula *lixo = *p;
  no *y = lixo -> dado;
  *p = lixo -> prox;
  free(lixo);
  return y;
}


void em_ordem (no *raiz){

        no *temp = raiz;
        celula *pilha_temp = NULL;
        int validade = 1;

        while(validade){
            if(temp){
                empilha(&pilha_temp,temp);
                temp = temp->esq;
            }else{
                if(pilha_temp != NULL){
                    temp = desempilha(&pilha_temp);
                    printf("%d ", temp->dado);
                    temp = temp->dir;
                }else{
                    validade = 0;
                }
            }
        }
}
