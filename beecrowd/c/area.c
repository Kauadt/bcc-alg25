#include <stdio.h>
#include <math.h>

double calcularArea(char type, double a, double b, double c ){
    double area;

    switch (type)
    {
    case 't':
        area = (a * c) / 2;
        break;

    case 'c':
        area = 3.14159 * pow(c, 2);
        break;

    case 'z':
        area = ((a + b) * c) / 2;
        break;

    case 's':
        area = pow(b, 2);
        break;

    case 'r':
        area = a * b;
        break;

    default:
        break;
    }

    return area;

}


int main(){
    
    double valueA, valueB, valueC;
    scanf("%lf %lf %lf", &valueA, &valueB, &valueC);
    
    printf("TRIANGULO: %0.3lf\n", calcularArea('t', valueA, valueB, valueC));
    printf("CIRCULO: %0.3lf\n", calcularArea('c', valueA, valueB, valueC));
    printf("TRAPEZIO: %0.3lf\n", calcularArea('z', valueA, valueB, valueC));
    printf("QUADRADO: %0.3lf\n", calcularArea('s', valueA, valueB, valueC));
    printf("RETANGULO: %0.3lf\n", calcularArea('r', valueA, valueB, valueC));



    return 0;
}