/* 

Para compilar basta dar gcc -o SAIDA ARQUIVO
ex: gcc -o average average.c

Para executar basta dar ./SAIDA
ex: ./average
 
*/


// Programa que calcula a média de 10 números
// a) Cálculo ao final

#include <stdio.h>

int main(){
    float score, avg, sum;

    for (int i = 0; i < 10; i++){
        printf("Por favor, informe a nota %d: ", i + 1);
        scanf("%f", &score);
        sum += score;
    }

    avg = sum/10;
    printf("Média: %f", avg);

    return 0;
}