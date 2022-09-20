#include <stdio.h>

int main () {

int B; 
int T; 
float area;
int saida; 

scanf("%d", &B);
scanf("%d", &T);


if(B == 0 || T == 0 ){
        if(B == 0 && T != 0 ){
            area = 35*T;
        }
        if(B != 0 && T == 0 ){
            area = 35*B;
        }
    }else if(B == T){
            area = 70*B;
    }else{
            area = (B+T)*35;
    }

if (area == 5600){
    saida = 0;
}
if (area < 5600) {
    saida = 2;
}

if (area > 5600){
    saida = 1;
}

printf("%d", saida);

return 0;
}