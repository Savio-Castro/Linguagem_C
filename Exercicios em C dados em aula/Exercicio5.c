// 5 - Faça um programa que leia a idade de uma pessoa e verifique se ela pode votar ou não(idade mínima para votar: 18 anos)
#include <stdio.h>

int main(void) {
  int idade;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  if (idade >= 18){
    printf("Você pode votar.\n");
  } else {
    printf("Você ainda não pode votar.\n");
  }
    
    return 0;
}