#include <stdio.h>

void oredenaTudo(char *v, int n){
    int i = 0;
    int h = 0;
    int j = 0;
    for(i = 0; i < n-1; i++){
        if (v[i] == v[i+1]){
            h++;
        } else {
            j++;
        }
    }
    printf("Quantidade de termos iguais: %d \nQuantidade de termos diferentes: %d", h, j);
}

int main(){
    int k = 0;
    int v[100] = {5, 5, 2, 3, 3, 2, 6, 7, 8, 9, 9, 7};
    oredenaTudo(v, 12);
    /*for(k = 0; k < 12; k++){
        printf("%d, ", v[k]);
    }*/
    printf("\noi");
}