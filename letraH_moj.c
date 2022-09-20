// #include <stdio.h>

struct tipoData {
    int dia;
    int mes;
    int ano;
};

struct tipoPessoa {
    char nome[80];
    struct tipoData dtNascimento;
};

struct tipoPessoa separaInfo (char nome[80], int dt_nascimento) {
    struct tipoPessoa info;
    
    int i;

    for(i=0; nome[i] != '\0'; i++)
        info.nome[i] = nome[i];
    info.nome[i] = '\0';

    //20220125

    info.dtNascimento.dia = dt_nascimento %100;
    dt_nascimento /= 100; // +=, -=, /=, *=  dt_nascimento = dt_nascimento / 100

    //202201
    info.dtNascimento.mes = dt_nascimento %100;
    dt_nascimento /= 100;

    //2022
    info.dtNascimento.ano = dt_nascimento; 

    return info;
}

/*int main(){

    struct tipoPessoa info;
    info = separaInfo("Abgail Moreira da Silva", 19970412);

    printf("Nome = %s\n", info.nome);
    printf("Data de nascimento: %02d/%02d/%04d\n", info.dtNascimento.dia, info.dtNascimento.mes, info.dtNascimento.ano);

    return 0;
}*/