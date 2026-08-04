//Obs: Eu errei em deixar o codigo meio poluido, por deixar um while dentro de um if, mas vou deixar assim para mostrar o que eu fiz sozinho.

#include <stdio.h>

int main(){

    int idade, quantidade;
    double soma, media;

    soma = 0;
    quantidade = 0;

    printf("Digite as idades: \n");
    scanf("%d", &idade);

    if (idade > 0){
        while (idade > 0 ){

            quantidade = quantidade + 1;
            soma = soma + idade;

            scanf("%d", &idade);
        }

    media = soma / quantidade;
    printf("MEDIA = %.2lf \n ", media);
    }

    else{
        printf("Impossivel calcular \n ");
    }

    return 0;
}