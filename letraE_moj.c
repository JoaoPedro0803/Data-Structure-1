#include <stdio.h>

int main (){
int a, sigPar = 0, sigImpar = 0;


do {
    scanf("%d",&a);
    if (a % 2 == 0){
        sigPar = sigPar + a;
    } else{
        sigImpar = sigImpar + a;
    }

} while(a != 0);

    printf("%d %d", sigPar, sigImpar);

return 0;    
}