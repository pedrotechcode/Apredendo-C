#include <stdio.h>

int main(){
    int senha, senha_valida = 2002;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != senha_valida){
        printf("Senha invalida. Tente novamente!\n");
        printf("Digite a senha: ");
        scanf("%d", &senha);
    }
    
    printf("Acesso permitido! ");
    
    return 0;
}