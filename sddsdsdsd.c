#include <stdio.h> 
#include <stdlib.h>]

int fatorial(int n){
    //Caso base: n = 1, 1! = 1
    if (n ==1 ) return 1;
    else return n * fatorial(n-1);
}

int main () {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fatorial(n));    
    return 0;
}