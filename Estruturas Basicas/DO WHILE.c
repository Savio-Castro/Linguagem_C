#include <stdio.h>

int main() {
    int num;
    
    do {
        printf("Digite um número positivo: ");
        scanf("%d", &num);
    } while (num <= 0);
    
    printf("O número digitado foi: %d\n", num);
    
    return 0;
}

