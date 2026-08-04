#include <stdio.h>

int main(){
    int N, i, resultado_produto;

    printf("Deseja a tabuada para qual valor: ");
    scanf("%d", &N);

    for (i=1; i <= 10; i++){
        resultado_produto = N * i;
        printf("%d x %d = %d \n",N, i, resultado_produto);
    }

    return 0;
}