#include <stdio.h>

float celsiusFaren (char tempC, float temp) {
    temp = (tempC * 9)/5 + 32;
    return temp;
}

float celsiusKel (char tempC, float temp){
    temp = tempC - 273.15;
    return temp;
}

float farenheintCel (char tempF, float temp){
    temp = ((tempF - 32)*5)/9;
    return temp;

}

float farenheintKel (char tempF, float temp){
    temp = 273.15 + (tempF - 32)*5/9;
    return temp;
}

float kelvinFaren (char tempK, float temp){
    temp = 1.8*(tempK -273.15) + 32;
    return temp;
}

float kelvinCel(char tempK, float temp){
    temp = tempK + 273.15;
    return temp;
}

int main(){
    char a;
    char b;
    float temp;
    printf("-----------------------Informe os dados com letra maiúscula!!! ---------------------\n");
    scanf(" %c\n", &a);
    scanf(" %c\n", &b);
    if (a == 'C' && b == 'F'){
        celsiusFaren(a, temp);
        printf("%f", celsiusFaren(a, temp));
    }
    if (a == 'C' && b == 'K'){
        celsiusKel(a, temp);
        printf("%f", celsiusKel(a, temp));
    }
    if (a == 'F' && b == 'C'){
        farenheintCel(a, temp);
        printf("%f", farenheintCel(a, temp));
    }
    if (a == 'F' && b == 'K'){
        farenheintKel(a, temp);
        printf("%f", farenheintKel(a, temp));
    }
    if (a == 'K' && b == 'F'){
        kelvinFaren(a, temp);
        printf("%f", kelvinFaren(a, temp));
    }
    if (a == 'K' && b == 'C'){
        kelvinCel(a, temp);
        printf("%f", kelvinCel(a, temp));
    }
    return 0;
}