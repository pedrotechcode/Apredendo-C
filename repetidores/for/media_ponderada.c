#include <stdio.h>

int main (){
    int N, i,  peso1 = 2, peso2 = 3, peso3 = 5;
    double num1, num2, num3, soma = 0, media;

    printf("Quanto casos voce vai digitar?: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("Digite tres numeros: \n");
        scanf("%lf %lf %lf", &num1, &num2, &num3);

        soma = (num1 * peso1) + (num2 * peso2) + (num3 * peso3);
        media = soma / (peso1 + peso2 + peso3);

        printf("Media = %.1lf\n", media);
    }
    return 0;
}