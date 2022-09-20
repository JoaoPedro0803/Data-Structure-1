#include <stdio.h>
int main() {
    int n1, ret;
    while ((ret = scanf("%d", &n1)) != EOF ) {
        printf("Retorno do scanf = %d, Valor lido = %d\n", ret, n1);    
    }

    printf("Fim do arquivo, EOF = %d\n", EOF);
    return 0;

}