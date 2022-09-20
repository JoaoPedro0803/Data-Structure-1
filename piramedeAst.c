#include <stdio.h>
int main (int argc, char const *argv[]) {
int n = 5;
int i, r, j;

for(i=1; i <= n; i++){
    for(r = n; r > i; r--){
        printf(" ");
    }
    for(j = 0; j < (2*i)-1;j++){
        printf("*");
    }
    printf("\n");
}

return 0;
}