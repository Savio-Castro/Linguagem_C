#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("O número digitado é positivo.\n");
    }
    else if (num < 0) {
        printf("O número digitado é negativo.\n");
    }
    else {
        printf("O número digitado é zero.\n");
    }
    
    return 0;
}

