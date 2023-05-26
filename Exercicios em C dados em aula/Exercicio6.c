// 6 - Faça um programa que leia vários números inteiros e exiba a média aritmética dos números positivos e a média aritmética dos números negativos lidos. A leitura deve ser interrompida quando for lido o número 0.
#include <stdio.h>

int main(void) {
  int num, soma_pos =0, soma_neg = 0;
  float media_pos = 0, media_neg = 0;
  int cont_pos = 0, cont_neg = 0;

  printf("Digite vários números inteiros(digite 0 para encerrar):\n");

  do{
    scanf("%d", &num);

    if(num > 0){
      soma_pos += num;
      cont_pos++;
    } else if (num < 0){
      soma_neg += num;
      cont_neg++;
    }
  } while (num != 0);

  if (cont_pos > 0){
    media_pos = (float) soma_pos / cont_pos;
    printf("A média aritmética dos números positivos é %.2f\n",media_pos);
  } else {
    printf("Não foram digitados números positivos\n");
  }
  if(cont_neg > 0){
    media_neg =(float)soma_neg / cont_neg;
    printf("A media aritmética dos números negativos é %.2f/n",media_neg);
  } else {
    printf("Não foram digitados números negativos\n");
  }
    return 0;
}
