#include <stdio.h>

int main() {
    char operacao;
    int num1, num2, resultado;
    
    printf("Digite a operação (+, -, *, /): ");
    scanf("%c", &operacao);
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("O resultado da soma é: %d\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("O resultado da subtração é: %d\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("O resultado da multiplicação é: %d\n", resultado);
            break;
        case '/':
            resultado = num1 / num2;
            printf("O resultado da divisão é: %d\n", resultado);
            break;
        default:
            printf("Operação inválida.\n");
            break;
    }
    
    return 0;
}

