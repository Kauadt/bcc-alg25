#include <stdio.h>

int main(){

    int codigos[2], qtdParts[2];
    double unitValue[2], total;

    for(int i = 0; i < 2; i++){
        scanf("%d %d %lf",&codigos[i], &qtdParts[i], &unitValue[i]);
    }

    total = (unitValue[0] * qtdParts[0]) + (unitValue[1]* qtdParts[1]);
    printf("VALOR A PAGAR: R$ %0.2lf\n", total);

    return 0;
}