#include <stdio.h>
#include <math.h>

int main(){

    double raio, volume;
    double pi = 3.14159;

    scanf("%lf", &raio);
    volume = (4/3.0) * pi * (pow(raio,3));
    printf("VOLUME = %0.3lf\n", volume);

    return 0;
}