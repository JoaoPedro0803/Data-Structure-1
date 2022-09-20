#include <stdio.h>
#include <locale.h>

/*
- inteiro %i
- float %f 
- char %c
- string %s
- modulo de um numero %u
- endereço de memoria %p
- %e para numeros em notaçao cientifica 

*/

int main () {
    
    int idade;
    char nome[10];
    printf("Digite seu nome: \n");
//  scanf("%s", &nome);
    fgets(nome, 10, stdin);      // isso é outro método que pega dados de entrada do usuário. (nomeVariavel, tamanhoVetor, indicaEntrada);
    printf("%s", nome);
    printf("me mama seu shimpa");
return 0;
}