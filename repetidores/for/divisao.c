#include <stdio.h>

int main (){
    int N, i;
    double numerador, denominador, divisao;

    printf("Quantos casos voce vai digitar?: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("Entre com numerador: ");
        scanf("%lf", &numerador);

        printf("Entre com denominador: ");
        scanf("%lf", &denominador);

        if (denominador == 0)
        {
            printf("Divisao imposivel\n");
        }
        else
        {
            divisao = numerador / denominador;
            printf("Divisao = %.2lf\n", divisao);
        }
    }
    return 0;
}