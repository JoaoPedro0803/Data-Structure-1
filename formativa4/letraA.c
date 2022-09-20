#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int *dados;
    int N, topo;
}pilha;

int desempilha (pilha *p, int *y){     // REMOVER UM ELEMENTO DA PILHA p E SALVAR EM y ----> Retornar 1 se for bem sucedida e 0 caso não
    if (p -> topo == 0)
        return 0;
    p -> topo--;
    *y = p->dados [p->topo];
    //printf("desempilhado fio");
    return 1;
}

pilha *cria_pilha() {               // INICIALIZA A PILHA 
    pilha *p = malloc(sizeof(pilha));
    p -> N = 4;
    p -> dados = malloc(p -> N * sizeof(int));   
    p -> topo = 0;
    return p;
}

int empilha (pilha *p, int x){
    if (p -> topo == p -> N){
        p -> dados = realloc(p -> dados, (2 * p -> N) * sizeof(pilha));
        if (p -> dados == NULL) return 0; // caso o realloc dê errado por algum motivo
        p -> N *= 2;
    }
    p -> dados [p -> topo] = x;
    p -> topo ++;
    return 1;
}

void imprime_pilha (pilha *p){
    //pilha *k = malloc(sizeof(pilha));
    //pilha *k = pilha *p; 
    int i , j;
    j = p->topo;
    if (p -> topo == 0)
        printf("Pilha vazia");
    else{
        for(i = j-1; i >= 0; i --){
            printf("%d\n", p->dados[i]);
        }
    }
    printf("\n");
}

int main () {

    int y = 4;
    pilha *p = cria_pilha();
    empilha(p, 1);     
    empilha(p, 2);     
    empilha(p, 3);     
    empilha(p, 4);     

    imprime_pilha(p);

    desempilha(p, &y);

    imprime_pilha(p);




    return 0;
}