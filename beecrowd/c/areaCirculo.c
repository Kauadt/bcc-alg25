#include <stdio.h>
#include <math.h>

int main(){
    double raio, area;
    scanf("%lf", &raio);

    area =  raio * raio * 3.14159;
    printf("A=%0.4lf\n", area);


    return 0;
}