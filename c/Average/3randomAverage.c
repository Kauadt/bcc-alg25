// c) Cálculo de média com números rândomicos
// Quero calcular a média dos números randômicos e dps mostrar os números utilizados

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));

    float avg, score, sum;

    for(int i = 0; i < 10; i++){
        score = rand() % 11;
        sum += score;
    }
    printf("Media final: %2.f\n", sum/10);

    return 0;
}


