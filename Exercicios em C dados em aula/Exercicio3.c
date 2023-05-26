// 3 - Faça um programa que leia vários números inteiros e exiba apenas os números positivos lidos.A leitura deve ser interrompida quando for lido o número 0
#include <stdio.h>

int main(void) {
    int num;
    
    printf("Digite vários números inteiros positivos (digite 0 para encerrar):\n");
    
    do {
        scanf("%d", &num);
        
        if (num > 0) {
            printf("%d\n", num);
        }
    } while (num != 0);
    
    return 0;
}
