#include <stdio.h>

int recMove(int *v, int i, int elem){
    if (i < 0 || v[i] <= elem) return i;
    v[i+1] = v[i];
    recMove(v, i-1, elem);
}

void ordena(int *v, int n) {
    if (n <= 1) return;
    ordena (v, n-1);
    int elem = v[n-1];
    int i = recMove(v, n-2, elem);
    v[i+1] = elem;
}

/*int main (){
    int v[6] = {8, 7, -1, 10, 1, 3};
    ordena (v, 6);
    print ("v = { %d", v[0]);
    for (int i = 1; i < 6; i++)
        printf(", %d", v[i]);
    printf(" }\n");
    return 0;
}*/