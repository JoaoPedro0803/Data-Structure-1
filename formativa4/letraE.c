#include <stdio.h>
//#include <stdlib.h>

typedef struct fila{
    int *dados;
    int N, p, u;
} fila;

fila *cria_fila(){
    fila f = malloc (sizeof(fila));
    f -> N = 10;
    f -> dados = malloc (f -> N * sizeof(int));
    f -> p = f -> u = 0;
    return f;

}

// **FUNÇÃO PARA CRIAR A FILA USANDO LISTA** 

typedef struct celula {
    int dado;
    struct celula *prox;
}celula;

int desenfileira(celula *f, int *y){
	celula *lixo = f -> prox; //LIXO REPRESENTARÁ O ELEMENTO DEPOIS DA CABEÇA
	if(lixo == NULL) return 0; // CASO A FILA ESTEJA VAZIA 
	*y = lixo -> dado; // O DADO A SER REMOVIDO SERÁ GUARDADO EM Y
	f -> prox = lixo -> prox; // TROCA AS SETINHAS PARA ISOLAR O LIXO
	free(lixo); // JOGA FORA O LIXO
	return 1;
}

int enfileira (fila *f, int x){
    if (f -> u + 1 % f -> N = f -> p){
        if (!redimensiona(f))
            return 0;
    }
    f -> dados [f -> u] = x;
    f -> u ++;
    if (f -> u == f -> N) f -> u = 0;
    return 1;
}

int desenfileira(fila *f, int *y){
    if (f -> p == f -> u) return 0;
    *y = f -> dados [f->p];
    f -> p = (f -> p + 1) % f -> N;
}

int main (){
    fila *f = cria_fila();

    enfileira(f, 1);
    enfileira(f, 2);
    enfileira(f, 3);
    enfileira(f, 4);


    return 0;
}