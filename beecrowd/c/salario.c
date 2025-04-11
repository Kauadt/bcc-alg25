#include <stdio.h>

int main(){

    int empNum, workedHours;
    double hourValue, salary;

    printf("Informe o código do funcionário: ");
    scanf("%d", &empNum);
    printf("Informe o número de horas trabalhadas: ");
    scanf("%d", &workedHours);
    printf("Informe o valor por horas: ");
    scanf("%lf", &hourValue);

    salary = workedHours * hourValue;
    printf("NUMBER = %d\n", empNum);
    printf("SALARY = U$ %0.2lf\n", salary);
    

    return 0;
}
