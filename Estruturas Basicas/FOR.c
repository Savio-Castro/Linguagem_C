#include <stdio.h>

int main() {
    int i, num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    return 0;
}

