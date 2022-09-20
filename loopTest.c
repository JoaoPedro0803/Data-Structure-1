#include <stdio.h>
 
int main () {

   int a, b;




   /* for loop execution */
   for( a = 0; a <= 6 ; a = a + 1 ){
      printf("%d\n", a);
      for ( b = 1; b<=a; b++){
         printf("%d\n", b);

      }
   }
 
   return 0;
}