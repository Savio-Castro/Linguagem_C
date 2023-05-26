// 15 -  Desde 2011, os serviços de encomenda dos Correios passaram a ser precificados pelo peso cúbico. O peso cúbico, diferente do peso físico em quilogramas, considera o volume da encomenda e pode ser calculado pela seguinte fórmula: (C x L x A) / 6.000 Onde:
//A = Altura do objeto (em centímetros)
//L = Largura do objeto (em centímetros)
//C = Comprimento do objeto (em centímetros)
//Montar um programa em C, onde serão lidos os dados de uma encomenda e retorne na tela o valor do peso cúbico da embalagem.
#include <stdio.h>
int main(void) {
  int altura, largura, comprimento;
  float peso_cubico;

  printf("Digite a altura (em cm) da encomenda: ");
  scanf("%d", &altura);

  printf("Digite a largura (em cm) da encomenda: ");
  scanf("%d", &largura);

  printf("Digite o comprimento (em cm) da encomenda: ");
  scanf("%d", &comprimento);

  peso_cubico = (altura * largura * comprimento) / 6000.0;

  printf("O peso cúbico da encomenda é: %.2f kg\n",peso_cubico);
  
}

