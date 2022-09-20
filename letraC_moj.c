#include <stdio.h>

int main () {

int questoes, par = 0, acertos = 0, erros = 0;
char gabarito [100];
char respostas [100];

//printf("Insira a quantidade de questoes: \n");
scanf("%d", &questoes);

//printf("Digite o Gabarito: \n");
scanf("%s", &gabarito);

//printf("Digite as questoes marcadas: \n");
scanf("%s", &respostas);

for(par; par < questoes; par++ ){
    if (gabarito[par] == respostas[par]){
        acertos++;
    } else {
        erros++;
    }


}
printf("%d\n", acertos);
//printf("Quantidade de erros: %d\n", erros);

return 0; 
}