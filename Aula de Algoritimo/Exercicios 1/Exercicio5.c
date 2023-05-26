//Exercício #5
/*Desenvolver um algoritmo para ler a idade e peso de três
pessoas. Calcular e imprimir idade e o peso médio das três
pessoas.*/

#include <stdio.h>

int main() {
    int idade1, idade2, idade3, idade_media;
    float peso1, peso2, peso3, peso_medio;

    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1);
    printf("Digite o peso da primeira pessoa: ");
    scanf("%f", &peso1);
    printf("\n");
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &idade2);
    printf("Digite o peso da segunda pessoa: ");
    scanf("%f", &peso2);
    printf("\n");
    printf("Digite a idade da terceira pessoa: ");
    scanf("%d", &idade3);
    printf("Digite o peso da terceira pessoa: ");
    scanf("%f", &peso3);
  
    peso_medio =(peso1 + peso2 + peso3)/3.0;
    idade_media =(idade1 + idade2 + idade3)/3;
  
    printf("\n");
    printf("A idade média das três pessoas é %d e o peso médio é %.2f.\n", idade_media, peso_medio);


    return 0;
}

