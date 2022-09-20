#include <stdio.h>
int main() {

int n;
int i, j, c = 0;

scanf("%d", &n);

for (i = 1; i <= n; i++){
    for (j = 1; j <= i; j++) {
        /*if(i < 10){
            printf("0%d ", i);    
        }else{
            printf("%d ", i);
        }*/
        printf("%02d ",i);
    }
    printf("\n");
} 

printf("\n");

for (i = 1; i <= n; i++){
    for (j = 1; j <= i; j++) {
        /*if (j<10){
           printf("0%d ", j); 
        }else{
            printf("%d ", j);
        }*/
        printf("%02d ",j);
        
    }   
    
    printf("\n");
} 

printf("\n");

return 0;
}