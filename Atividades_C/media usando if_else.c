#include <stdio.h>

int main()
{
    float media, soma,n1, n2, n3, n4;
    
    printf("Escreva a primeira nota: ");
    scanf("%f", &n1);
    printf("Escreva a segunda nota: ");
    scanf("%f", &n2);
    printf("Escreva a terceira nota: ");
    scanf("%f", &n3);
    printf("Escreva a quarta nota: ");
    scanf("%f", &n4);
    
    soma = n1 + n2 + n3 + n4;
    media = soma / 4;
    
    printf("A soma das suas notas foi : %.2f\n", soma);
    if(media >= 7){
        printf("com a nota %.2f você foi APROVADO",media);
    } else {
        printf("Com a nota %.2f você foi REPROVADO",media);
    }

    return 0;
}

