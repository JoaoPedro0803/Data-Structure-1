#include <stdio.h>
//#include <math.h>

int main () {

int numero, ret;
int quant = 0;
    while ((ret = scanf("%d", &numero)) != EOF ) {
        quant++;    
    }

    printf("%d\n", quant);
   
return 0;
}