//Exercício #2
/*Fazer um programa que leia o valor do salário mínimo e o
valor do salário de uma pessoa. Calcular e imprimir quantos
salários mínimos ela ganha.*/

#include <stdio.h>

int main(void) {
  float salario_minimo, salario_pessoa;
  int quantidade;

  printf("Digite quanto vale um sálario mínimo: ");
  scanf("%f",&salario_minimo);
  printf("\n");
  printf("Digite o valor do seu salário: ");
  scanf("%f", &salario_pessoa);
  printf("\n");
  
  quantidade = salario_pessoa/ salario_minimo;
  printf("Você recebe %d salários mínimos",quantidade);
  
  return 0;
}