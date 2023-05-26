//Exercício #3
/*A imobiliária Central vende apenas terrenos retangulares.
Faça um programa para ler as dimensões de um terreno e
depois exibir a área do terreno.*/

#include <stdio.h>

int main(void) {

  float comprimento, largura, area;

  printf("Digite um valor para o comprimento: ");
  scanf("%f",&comprimento);
  printf("\n");
  printf("Digite um valor para a largura: ");
  scanf("%f", &largura);
  printf("\n");
  
  area = comprimento *largura;
  printf("A dimensão desse terreno retangular é %.2f m²",area);
  
  return 0;
}