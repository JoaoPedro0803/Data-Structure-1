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

void empilha(celula **p, no *n){ 
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


void pre_ordem (no *root){
        no *temp = root;
        celula *pilha_temp = NULL;
        int validade = 1;
        while(validade){
            if(temp){
                printf("%d ", temp->dado);
                empilha(&pilha_temp,temp);
                temp = temp->esq;
            }else{
                if(pilha_temp != NULL){
                    temp = desempilha(&pilha_temp);
                    temp = temp->dir;
                }else{
                    validade = 0;
                }
            }
        }
}
