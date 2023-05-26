#include <stdio.h>

int main() {
    int num, soma = 0;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    while (num != 0) {
        soma += num;
        printf("Digite outro número (ou 0 para sair): ");
        scanf("%d", &num);
    }
    
    printf("A soma dos números digitados é: %d\n", soma);
    
    return 0;
}

