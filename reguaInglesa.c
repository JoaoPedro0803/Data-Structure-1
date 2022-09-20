void reguaInglesa(int n){
    int i;
    if (n == 1)
        printf(".-\n");
    else{
        reguaInglesa(n-1);
        printf(".");
        for(i = 0; i < n; i++){
            printf("-");
        }
        printf("\n");
        reguaInglesa(n-1);
    }
}

int main (){
   
    int n;
    printf ("Digite n: ");
    scanf("%d", &n);
    reguaInglesa(n);

    return 0;
}