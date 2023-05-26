// 16 - Faça um programa que leia três números reais(float) e imprima o maior e o menor desses números
#include <stdio.h>
int main(void){
float num1, num2, num3, maior, menor;
  printf("Digite o primeiro número: ");
  scanf("%f",&num1);

  printf("Digite o segundo número: ");
  scanf("%f",&num2);
  
  printf("Digite o terceiro número: ");
  scanf("%f",&num3);

  maior = num1;
  menor = num1;

  if(num2 > maior){
    maior =num2;
  }

  if(num3 > maior){
    maior = num3;
  }

  if (num2 < menor){
    menor = num2;
  }

  if(num3 < menor){
    menor = num3;
  }

  printf("O maior número é: %.2f\n",maior);
  printf("O menor número é: %.2f\n",menor);
  return 0;
} 
