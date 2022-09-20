int buscaBi(int *v, int n, int elem){
    int i, inicio, meio, final;
    inicio = 0;
    final = n-1;
    while (inicio <= final){
        meio = (inicio + final)/2;
        if(elem < v[meio])
            final = meio - 1;
        else
            if(elem > v[meio])    
            final = meio + 1;
            else    
                return meio;
    }
    return -1;
}

void busca(int *v, int n, int elem){
    int i;
    for(i=0; i <= n-1; i++){
        if (v[i] == elem){
            printf("%d\n", v[i]);
        }
    }
    printf("%d", -1);       // caso nao encontreo o elem procurado.
}


int main (){
    int v[6] = {1, 2, 3, 5, 2, 9};
    busca(v, 6, 3);
    
    return 0;
}