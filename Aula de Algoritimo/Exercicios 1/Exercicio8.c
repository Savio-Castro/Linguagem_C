//Exercício #8
/*O custo ao consumidor de um carro novo é a soma do custo
de fábrica com a porcentagem do distribuidor e dos
impostos (aplicados ao custo de fábrica).
Supondo que a porcentagem do distribuidor seja de 12% do
preço de fábrica e os impostos de 30% do preço de fábrica,
fazer um programa para ler o custo de fábrica de um carro e
imprimir o custo final ao consumidor.*/

#include <stdio.h>

int main(void) {

  #include <stdio.h>
    float custo_fabrica, custo_consumidor;
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custo_fabrica);
    printf("\n");
    
    
    custo_consumidor = custo_fabrica * 1.12 * 1.3;
    
    printf("O custo final ao consumidor e: R$ %.2f\n",               custo_consumidor);
  
  return 0;
}