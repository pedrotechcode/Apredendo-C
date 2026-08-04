#include <stdio.h>


int main(){
    int N, quantidade_cobaia, total_cobaias = 0, total_coelhos = 0, total_ratos= 0, total_sapos = 0;
    char tipo_cobaia;
    double porcentual_coelhos, porcentual_ratos, porcentual_sapos;

    printf("Quantos casos de teste serao digitados?: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("Quantidade de cobaias: ");
        scanf("%d", &quantidade_cobaia);
        printf("Tipo de cobaia: ");

        // // Espaço antes do %c faz o scanf ignorar caracteres de espaço,
        // como Enter (\n), espaços e tabulações que ficaram no buffer de entrada.
        scanf(" %c", &tipo_cobaia);

        total_cobaias += quantidade_cobaia;

        if (tipo_cobaia == 'c')
        {
            total_coelhos += quantidade_cobaia;
        }
        else if (tipo_cobaia == 'r')
        {
            total_ratos += quantidade_cobaia;
        }
        else if (tipo_cobaia == 's')
        {
            total_sapos += quantidade_cobaia;
        }
    }

    porcentual_coelhos = (double) total_coelhos / total_cobaias * 100;
    porcentual_ratos = (double) total_ratos / total_cobaias * 100;
    porcentual_sapos = (double) total_sapos / total_cobaias * 100;

    printf("Relatorio final\n");
    printf("Total de cobaias: %d\n", total_cobaias);
    printf("Total de coelhos: %d\n", total_coelhos);
    printf("Total de ratos: %d\n", total_ratos);
    printf("Total de sapos %d\n", total_sapos);
    printf("Porcentual de coelhos %.2lf\n", porcentual_coelhos);
    printf("Porcentual de ratos %.2lf\n", porcentual_ratos);
    printf("Porcentual de sapos %.2lf\n", porcentual_sapos);

    return 0;
}