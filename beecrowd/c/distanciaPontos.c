#include <stdio.h>
#include <math.h>

double difference(double number1, double number2){
    return number1 - number2;
}

int main(){

    double coords[2][2], pows[2], distance;

    scanf("%lf %lf", &coords[0][0], &coords[0][1]);
    scanf("%lf %lf", &coords[1][0], &coords[1][1]);

    pows[0] = pow(difference(coords[1][0], coords[0][0]), 2);
    pows[1] = pow(difference(coords[1][1], coords[0][1]), 2);

    distance = sqrt((pows[0] + pows[1]));

    printf("%0.4lf\n", distance);

    return 0;
}