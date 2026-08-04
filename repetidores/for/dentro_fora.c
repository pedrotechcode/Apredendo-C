#include <stdio.h>

int main() {
    int N, num, i, dentro = 0, fora = 0;

    printf("Quantos numeros voce vai digitar?: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num >= 10 && num <=20)
        {
            dentro++;
        }
        else 
        {
            fora++;
        }
    }

    printf("%d Dentro\n", dentro);
    printf("%d Fora", fora);

    return 0;
}