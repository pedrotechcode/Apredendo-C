#include <stdio.h>

int main(){
    int x, y;

    printf("Digite os valores das coordenadas X e Y: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != 0 && y != 0)
    {
        if (x > 0 && y > 0)
        {
            printf("Quadrante Q1 \n");
        }
        else if (x < 0 && y > 0)
        {
            printf("Quadrante Q2 \n");
        }
        else if (x < 0 && y < 0)
        {
            printf("Quadrante Q3 \n");
        }
        else if (x > 0 && y < 0)
        {
            printf("Quadrante Q4 \n");
        }
        printf("Digite os valores das coordenadas X e Y: \n");
        scanf("%d", &x);
        scanf("%d", &y);
    }
    return 0;
}