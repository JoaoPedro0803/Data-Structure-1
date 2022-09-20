#include <stdio.h>

void ordenacaoC(int *v, int n){
    int elem, i, j;
    for(i=0; i<n; i++){
        elem = v[i];
        for(j = i-1 ; j >= 0 && v[j]>elem; j--){
            v[j+1] = v[j];
        }
        v[j+1] = elem;
    }
}

/*void ordenacaoC(int *v, int size) {
    int pivot, j, i = 1;

    while (i <= size){
        //printf("oi");
        pivot = v[i];
        j = i-1;
        while (v[j] > pivot && v[j] >= 0){
            //printf("oi");
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = pivot;
        i++;   
    }
}*/

int main (){
    /*int h;
    int v[8] = {100, 25, 5, 3, 2, 4, 1, 41};
    ordenacaoC(v, 8);
    for(h = 0; h < 8; h++){
        printf("%d ", v[h]);
    }*/

    /*int x, ret;
    int i = 0;
    int v[];
    ret = scanf("%d", &x);
    while (ret != EOF){
        printf("Valor lido: %d\n", x);
        ret = scanf("%d", &x);

    }*/
    int v[1000];
    int h = 0;
    int i, x;
    while (scanf("%d", &x) != EOF){
        v[h] = x;
        h++;
    }
    ordenacaoC(v, h);
    for(i = 0; i < h; i++){
        printf("%d ", v[i]);
    }
    return 0;
}