// 1 - Faça um programa que leia vários números inteiros e exiba o bobro de cada número ímpar lido. A leitura deve ser interrompida quando for lido o número 0.

#include <stdio.h>

int main(void) {
  int num;

  do{
    printf("Digite um número inteiro(ou 0 para sair)");
    scanf("%d",&num);

    if(num != 0 && num % 2 != 0){
      printf("O dobro do número ímpar %d é %d\n", num, num * 2);
    }
  }while(num != 0);
  return 0;
}