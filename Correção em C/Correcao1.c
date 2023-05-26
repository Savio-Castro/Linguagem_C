#include <stdio.h>

int main(void) {
  int n, num, pares = 0, impares = 0, soma_pares = 0, soma_impares = 0;
  printf("Digite a quantidade de números a serem lidos: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    printf("Informe o %dº número: ", i);
    scanf("%d",&num);

    if(num % 2 == 0){
      pares++;
      soma_pares += num;
    } else{
      impares++;
      soma_impares += num;
    }
  }

  printf("\nQuantidade de numero pares: %d\n",pares);
  printf("Quantidade de números impares: %d\n", impares);
  printf("Soma dos números pares %d\n",soma_pares);
  printf("Soma dos números ímpares: %d\n",soma_impares);
  return 0;
}

