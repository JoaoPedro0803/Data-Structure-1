#include <stdio.h>

int main(int argc, char const *argv[]){
    int quant, soma = 0, maiores = 0;
    float media;
    int inseridos[10000];

    scanf("%d", &quant);

    if(quant >= 10 && quant <= 10000){
        for(int a = 0; a < quant; a++){
            scanf("%d", &inseridos[a]);
            soma = soma + inseridos[a];
        }

        media = soma / quant;

        for(int b = 0; b < quant; b++){
            if(inseridos[b]>media){
                printf("%d ", inseridos[b]);
                maiores++;
            }
        }
        if(maiores==0){
            printf("0");
        }
    }else{

    }
    return 0;
}