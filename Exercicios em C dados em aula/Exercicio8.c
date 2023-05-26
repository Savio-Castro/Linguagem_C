// 8 - Crie um programa que leia três números inteiros e informe qual deles é maior
#include <stdio.h>

int main(void) {
  int num1, num2, num3;

  printf("Digite três números inteiros:\n");
  scanf("%d%d%d", &num1, &num2, &num3);

  if (num1 > num2 && num1 > num3){
    printf("%d é o maior número\n", num1);
  } else if (num2 > num1 && num2 > num3){
    printf("%d é o maior número\n",num2);
  } else {
    printf("%d é o maior número\n",num3);
  }
    return 0;
}
