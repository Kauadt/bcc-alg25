// gcc -o SAIDA ARQUIVO.C -lm  || Utiliza-se o "-lm" por conta da lib "math.h"
#include <stdio.h>
#include <math.h>


//Errado
int main(){
    double radians, sinValue;
    double maior = 0, menor = 0;

    for(int degress = 0; degress <= 360; degress++){
        radians = degress * (3.14159 / 180);
        sinValue = sin(radians) * 50;
        int numSpaces = 80 + (sinValue - 1);
        printf("%*s*\n", numSpaces, "");
        printf("%*s|\n", 54, "");


        if(sinValue > maior){
            maior = sinValue;
        }

        if(sinValue < menor){
            menor = sinValue;
        }
    }

    printf("Maior: %lf\nMenor: %lf\n", maior, menor);
 

    return 0;
}