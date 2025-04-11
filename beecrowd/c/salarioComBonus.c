
#include <stdio.h>

int main(){
    char nome;
    double fixedSalary, totalSales, salaryWithBonus;

    printf("Digite o nome do vendedor: ");
    scanf("%s", &nome);
    printf("Informe o salário fixo do funcionário: ");
    scanf("%lf", &fixedSalary);
    printf("Informe o total de vendas do funcionário: ");
    scanf("%lf", &totalSales);

    salaryWithBonus = fixedSalary + (totalSales * 0.15);

    printf("TOTAL = R$ %0.2lf\n", salaryWithBonus);

    return 0;
}