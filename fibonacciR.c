/*long int fibonacci (int n) {
    if (n == 1 || n == 2) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}*/

//#include <stdio.h>

long int v[81];

long int fibonacci (int n){
    
    v[1] = 1;
    v[2] = 1;
    if (v[n] != 0){
        return v[n];
    } 
    else{
        v[n] = fibonacci(n-2) + fibonacci(n-1);
        return v[n];
    } 
}




