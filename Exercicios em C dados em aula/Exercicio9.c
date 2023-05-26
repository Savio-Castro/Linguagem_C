// 9 - Crie um programa que leia uma sequência de números inteiros até que o número 0 seja digitado.Ao final, o programa deve informar a média dos números digitados.
#include <stdio.h>
int main(void) {
  int num, soma = 0, cont = 0;
  float media;

printf("Digite uma sequência de números inteiros(digite 0 para  encerrar):\n");

  do{
    scanf("%d",&num);

    if(num != 0){
      soma += num;
      cont++;
    }
  } while (num != 0);

  if(cont > 0){
    media = (float) soma / cont;
    printf("A média dos números digitados é %.2f\n",media);
  } else {
    printf("Não foram digitados números\n");
  }
    return 0;
}
