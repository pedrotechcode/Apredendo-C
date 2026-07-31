#include <stdio.h>

int main(){
    int N, x, i, soma, pares, contagem;

printf("Quantos numeros voce quer digitar: ");
scanf("%d", &N);

soma = 0;
contagem = 0;

for (i = 1; 
    i <=N; i++) {
    printf("Digite um numero: ");
    scanf("%d", &x);

    if (x % 2 == 0) {
    soma = soma + x;
    }
    else {
    contagem = contagem + 1;
    }
}

printf("Resultado da soma de numeros pares = %d\n", soma);
printf("Numeros impares digitados %d\n", contagem);

return 0;
}
