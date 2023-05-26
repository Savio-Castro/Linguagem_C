// 11 -  A série de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Escreva um algoritmo que gere a série de FIBONACCI até o termo (N) digitado pelo usuário (o termo N indica quantos números serão gerados, exemplo Para N=5, será gerada a sequência 1, 1, 2, 3, 5, 8 - O valor inicial 1 não entra na contagem
#include <stdio.h>

int main(void) {
  int n, a = 1, b =1, c;

  printf("Digite o valor de N: ");
  scanf("%d",&n);

  printf("A série de Fibonacci até o termo %d é: ",n);

  for(int i = 1; i <= n; i++){
    if(i != 1){
      printf(", ");
    }
    printf("%d",a);
  c = a + b;
  a = b;
  b = c;
  }
  printf("\n");
  return 0;
}

