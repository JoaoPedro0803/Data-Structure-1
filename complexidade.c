/*
**Complexidade**
--> como medir o desempenho de algoritmos. 
    --> tempo de execução
        -processamento
        -tempo de resposta
        -tempo de transferencia de dados(RAM, CHACHE, HD...)
        -escalonamento de processos do sis op.



    --> *numero de operações*
        -é uma medida convencional, pq é invariável de pc para pc, dado o msm codigo.
        -Interesse principal: estudar como o tempo de execução varia conforme a entrada aumenta.
        - Ordem de grandeza da quantidade de operações e nao cm a quantidade exata.

    **Notação assintótica**
        (Big-O) (O grande)

    --> Estima a ordem de crescimento de uma função.
        Uma função f(n) é O(g(n)) se existirem constantes
        c > 0 e n0>= 0 tais que:

        f(n) <= c*g(n), para todo n >= n0.

        Ex.:
        g(n) = n, c = 3 e n0 = 0
        Portanto, podemos dizer que o algoritmo maiior é
        O(n).


        Ex.:
            -Encontrar o maior elemento de um vetor.
            -Melhor caso seria em q v[0] é o maior elemento do vetor.
            -Pior caso: se o vetor é estritamente crescente.
            -Numero de operações = numero no pior caso.

*/
#include <stdio.h>
#include <stdlib.h>

/*int *teste () {
    int *x = malloc(sizeof (int));
    *x = 5;
    printf("%d\n", *x);
    return (x);
}

void teste2(int *ptr){
    printf("%d\n", *ptr);
}

int main (){
    int *ptr;
    ptr = teste();
    printf("%d\n", *ptr);
    teste2(ptr);
    
return 0;
}*/


int main() {
    int v[5] = { 4, 7, 3, 10, 12 };

    printf("%ld" , *v+3);

    return 0;
}