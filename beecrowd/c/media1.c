#include <stdio.h>

int main(){
    double A, B, avg;

    printf("Informe a nota A: ");
    scanf("%lf", &A);
    printf("Informe e nota B: ");
    scanf("%lf", &B);
    
    if((A < 0 || A > 10) || (B < 0 || B > 10 )){
        printf("As notas devem ser de 0 a 10");
    }

    avg = ((A * 3.5) + (B * 7.5)) / 11;
    printf("MEDIA = %0.5lf\n", avg);

    return 0;
}
