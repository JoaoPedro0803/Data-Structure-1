#include <stdio.h> 
int main () {
int i, n = 5, j, c =0;

for(i=0; i <= n; i++){
    for(j = 0; j <= i; j++){
        if(c < 10)
        printf("0%d ", c++);
        else
        printf("%d ", c++);
    }
    printf("\n");
}





return 0;
}