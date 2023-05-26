//Exercício #4
/*Fazer um programa em C para calcular o peso cúbico de
uma embalagem através da Fórmula: (C x L x A) / 6000, onde
A = Altura do objeto (em centímetros)
L = Largura do objeto (em centímetros)
C = Comprimento do objeto (em centímetros)*/

#include <stdio.h>

int main(void) {
  float altura, largura, comprimento,peso_cubico;
  printf("Digite um valor para altura: ");
  scanf("%f",&altura);
  printf("\n");
  printf("Digite um valor para largura: ");
  scanf("%f",&largura);
  printf("\n");
  printf("Digite um valor para comprimento: ");
  scanf("%f",&comprimento);
  printf("\n");

  peso_cubico = (altura*largura*comprimento)/6000;

  printf("O peso cubico da embalagem é %.2f cm ", peso_cubico );
  
  return 0;
}