#include <stdio.h>

int main(){
    int N, i, num;

    printf("Quantos numeros voce vai digitar?: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num % 2 == 0 && num > 0)
        {
            printf("Par positivo\n");
        }
        else if (num % 2 == 0 && num < 0)
        {
            printf("Par negativo\n");
        }
        else if (num % 2 != 0 && num > 0)
        {
            printf("Impar positivo\n");
        }
        else if (num % 2 != 0 && num < 0)
        {
            printf("Impar negativo\n");
        }
        else
        {
            printf("Nulo\n");
        }
    }

    return 0;
}