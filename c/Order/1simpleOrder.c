#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: \n");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("%d, %d", num1, num2);
    } else{
        printf("%d, %d", num2, num1);
    }

    return 0;
}