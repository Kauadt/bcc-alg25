#include <stdio.h>

// Nome, qtdTotalDeIngredientes, qtdUsadaIngrediente,

int main(){

    int totalIngredients;
    char *ingredients[250][4];

    printf("Digite a quantidade de ingredientes: ");
    scanf("%d", &totalIngredients);

    for (int i = 0; i < totalIngredients; i++){
        printf("Nome: ");
        scanf("%s", ingredients[i][0]);
        printf("Quantidade total: ");
        scanf("%s", ingredients[i][1]);        
    }

    printf("%s \n%s", ingredients[0][0], ingredients[0][1]);

    // for(int i = 0; i < totalIngredients; i++){

    //     // Nome
    //     // QtdComprado
    //     // QtdUsado
    // }

    return 0;
}
