#include<stdio.h>

void moveX(char *v, int n) {
  if(v[n] !='\0') {
    if(v[n] != 'x') {
      printf("%c", v[n]);
      moveX(v, n+1);
    } else {
      moveX(v, n+1);
      printf("%c", v[n]);
    }

  }
}
int main() {
  char v[1000];

  scanf("%s", v);
  moveX(v, 0);
  return 0;

}