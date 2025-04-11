#include <stdio.h>

int main()
{
    int A, B, C, D, dif;

    printf("A: ");
    scanf("%d", &A);
    printf("B: ");
    scanf("%d", &B);
    printf("C: ");
    scanf("%d", &C);
    printf("D: ");
    scanf("%d", &D);
    dif = (A * B) - (C * D);
    printf("DIFERENCA = %d\n", dif);

    return 0;
}