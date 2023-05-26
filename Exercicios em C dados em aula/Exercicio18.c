// 18 - Faça um programa que leia um número inteiro e exiba se ele é positivo, negativo ou zero. 
#include <stdio.h>

int main(void) {
  int num;

  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  if (num > 0) {
    printf("O número %d é positivo\n", num);
  } else if (num < 0) {
    printf("O número %d é negativo\n", num);
  } else {
    printf("O número é zero\n");
  }

  return 0;
}
