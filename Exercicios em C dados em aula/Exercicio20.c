// 20 - Escreva um algoritmo que escreva todos os números múltiplos de 5, no intervalo de 1 a 500.
#include <stdio.h>

int main(void) {
  int i;

  for(i = 1; i <= 500; i++){
    if(i % 5 == 0){
      printf("%d\n", i);
    }
  }
  return 0;
}
