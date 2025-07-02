#include <stdio.h>

int main(){

    int time, avgSpeed, distance;
    double fuel;

    scanf("%d", &time);
    scanf("%d", &avgSpeed);

    distance = time * avgSpeed;
    fuel = distance / 12.0;
    printf("%.3lf\n", fuel);

    return 0;
}

