// 4 - Faça um programa que exiba a tabuada completa 6
#include <stdio.h>

int main(void) {
    int num = 6;

    printf("Tabuada do %d:\n",num);

  for(int i = 1; i <= 10; i++){
    printf("%d x %d = %d\n",num, i, num*i);
  }
    return 0;
}