// 10 - Fazer um programa para exibir a somatória de todos os números divisíveis por 5 que estão dentro do intervalo entre 1 e 99.
#include <stdio.h>

int main(void) {
  int soma = 0;

  for (int i = 1; i <= 99; i++) {
    if (i % 5 == 0) {
      soma += i;
    }
  }

  printf("A somatória de todos os números divisíveis por 5 entre 1 e 99 é %d\n", soma);

  return 0;
}

