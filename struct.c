#include <stdio.h>

int main (){
struct perfil {
    long int cpf;
    char nome[40];
    };
    struct perfil p;

    printf("Digite o nome da pessoa: \n");
    fgets(p.nome, 40, stdin);
    printf("Digite o cpf da pessoa: \n");
    scanf("%d", &p.cpf);
    printf("Dados das pessoas cadastradas\n");
    printf("cpf: %d\nnome: %s", p.cpf, p.nome);

    
    return 0;
}