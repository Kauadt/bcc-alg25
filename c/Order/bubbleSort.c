#include <stdio.h>

int main(){
    int numbers[10]; 
    int wasSwapped;

    for(int i = 0; i < 10; i++){
        printf do texto("Digite um número: ");
        scanf("%d", &numbers[i]);
    }

    do{
        wasSwapped = 0;
        for(int i = 0; i < 9; i++){
            if(numbers[i] > numbers[i+1]){
                int tempNum = numbers[i+1];
                numbers[i+1] = numbers[i];
                numbers[i] = tempNum;
                wasSwapped = 1;
            }
        }
    } while(wasSwapped == 1);

    for(int i = 0; i < 10; i++){
        printf("\n%d - %d", (i+1), numbers[i]);
    }

    return 0;   
}

