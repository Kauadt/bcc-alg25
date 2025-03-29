//b) Cálculo de média de 10 números com resultados parciais

#include <stdio.h>

int main(){
    float avg, score, sum;

    for(int i = 0; i < 10; i++){
        printf("Por favor, informe a nota %d: ", i + 1);
        scanf("%f", &score);
        sum += score;
        avg = sum / (i + 1);
        
        if(i < 9){
            printf("Media parcial: %2.f\n", avg);
        }
    }
    printf("Media final: %2.f\n", avg);

    return 0;
}


