#include <stdio.h>

int fatF(int n){
    if(n == 0){
        return 1;
    } else {
        return n * fat(n-1);
    }
    
}

int main(){
    int num, fat;
    printf("Digite um número: ");
    scanf("%d", &num);
    fat = fatF(num);
    printf("%d! = %d\n", num,fat);

    return 0;
}