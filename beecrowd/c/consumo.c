#include <stdio.h>

int main(){
    int totalDistance;
    double totalFuel, value;
    
    scanf("%d", &totalDistance);
    scanf("%lf", &totalFuel);

    value = totalDistance / totalFuel;

    printf("%0.3lf km/l\n", value);


    return 0;
}