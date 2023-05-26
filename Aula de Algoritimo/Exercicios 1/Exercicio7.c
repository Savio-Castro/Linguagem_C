//Exercício #7
/*Ler uma quantidade de chuva dada em polegadas e imprimir
o equivalente em milímetros (1 polegada = 25,4 mm).*/

#include <stdio.h>

int main(void) {

  float chuva_polegada, chuva_milimetro;

  printf("Digite um valor para a quantidade de chuva: ");
  scanf("%f",&chuva_polegada);
  printf("\n");
  
  chuva_milimetro = chuva_polegada *25.4;
  
  printf("A quantidade da chuva em milimetro e %.2f mm ",chuva_milimetro);
  
  return 0;
}