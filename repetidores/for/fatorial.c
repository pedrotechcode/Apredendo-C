#include <stdio.h>

int main ()
{
    int N, i, x = 0, fatorial = 1;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (i = N; i > 0; i--)
    {
        fatorial = fatorial * i;
    }

    printf("Fatorial = %d", fatorial);

    return 0;
}