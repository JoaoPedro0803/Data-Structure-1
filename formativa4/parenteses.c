#include <stdio.h>
#include <stdlib.h>

int t = 0;
int a = 0;
int k = 0;
int l = 0;
int m = 0;
int y = 0;

typedef struct pilha {
	int *dados;
	int N, topo;
} pilha;

pilha *cria_pilha() {               // INICIALIZA A PILHA 
    pilha *p = malloc(sizeof(pilha));
    p -> N = 500;
    p -> dados = malloc(p -> N * sizeof(int));   
    p -> topo = 0;
    return p;
}

int empilha (pilha *p, char x){
    int i , j;
    j = p->topo;
	p -> dados[j] = x;
	j++; 
    for(i = j-1; i >= 0; i --){
        if (p->dados[i] == '('){
            t++;  
        }else if(p->dados[i] == ')'){
            a++;
        }else if(p->dados[i] == '['){
            k++;
        }else if(p->dados[i] == ']'){
            l++;
        }else if(p->dados[i] == '{'){
            m++;
        }else if(p->dados[i] == '}'){
            y++;    
        }
     }
    return 1;
}

/*int imprime(celula *p){
    if (novo -> dado == '(') i++;
    if (novo -> dado == ')') j++;
    if (novo -> dado == '[') k++;
    if (novo -> dado == ']') l++;
    if (novo -> dado == '{') m++;
    if (novo -> dado == '}') y++;
}*/


int main (){
    //char r;
    //printf("digite o primeiro operando: ");
    //scanf("%c", &r);
    pilha *p = cria_pilha();
    empilha(p, "a");
    empilha(p, "+");
    empilha(p, "a");
    empilha(p, "(");
    empilha(p, "{");

    if ((t && a == 0)
    // fazer os ifs de acordo com as variaveis globais
    return 0;
}
// compara a quantidade de caracter de parenteses coxetes e chaves e prin