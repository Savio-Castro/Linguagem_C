// 19 - Escreva um algoritmo que mostre todos os números pares do intervalo de 100 a 200. 
#include <stdio.h>

int main(void) {
  int i;

  for(i = 100; i <= 200; i++){
    if(i % 2 == 0){
      printf("%d\n",i);
    }
  }

  return 0;
}
