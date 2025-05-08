/*

1) Faça um algoritmo que peça uma string ao usuário e mostre quantas vogais existem na string. Por
exemplo, para a string “alo mundo” deve ser exibida a saída “a=1, o=2, u=1”. Para construir a lógica
de contagem, considere a string como sendo um vetor de caracteres.

*/


#include <stdio.h>
#include <ctype.h>  

int mapearVogal(char letra){
    letra = toupper(letra);
    switch (letra)
    {
        case 'A': return 0;
        case 'E': return 1;
        case 'I': return 2;
        case 'O': return 3;
        case 'U': return 4;
        default: return -1;
    }
}

int main(){
    char frase[] = {"Alo mundo"};
    int contador[] = {0, 0, 0, 0, 0};
    int indiceVogal;
    int arrayLength = sizeof(frase) / sizeof(frase[0]);

    for(int letra = 0; letra < arrayLength; letra++ ){
        indiceVogal = mapearVogal(letra);

       if(indiceVogal != -1){
         contador[indiceVogal] += 1;
       }
    }

    printf("%d %d %d", contador[0], contador[3], contador[4]);
    


    return 0;
}