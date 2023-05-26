// 7 - Faça um programa que leia vários números inteiros e exiba quantos números são pares e quantos são ímpares. A leitura deve ser interrompida quando for lido o número 0.
#include <stdio.h>

int main(void) {
  int num, cont_par = 0, cont_impar = 0;

  printf("Digite vários números inteiros(digite 0 para encerrar):\n");

  do{
    scanf("%d",&num);

    if(num != 0){
      if(num % 2 == 0){
        cont_par++;
      } else {
        cont_impar++;
      }
    }
  }while(num != 0);

  printf("Quantidade de números pares: %d\n", cont_par);
  printf("Quantidade de números ímpares: %d\n", cont_impar);
    
    return 0;
}
