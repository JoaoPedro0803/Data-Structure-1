void selectionSort(int *v, int n){
    int i, j, menor, tmp;
    for (i = 0; i <= n-1; i++){
        menor = i;
        for(j = i+1; j < n; j++)
            if(v[j] < v[menor])
                menor = j;
        if (menor != i){
            tmp = v[i];
            v[i] = v[menor];
            v[menor] = tmp;
        } 
    }
}

int main (){
    int v[5] = {10, 6, 4, 2, 1};
    int n = 5;
    int h;
    selectionSort(v, 5);
    for (h = 0; h <= n-1; h++){
        printf ("%d ", v[h]);
    }
    return 0;
}