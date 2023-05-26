#include <stdio.h>

int main(void) {
  int n,contaneg=0,j;
  
  for(j = 1; j <=5; j++){
    printf("Digite um valor qualquer: ");
    scanf("%d",&n);
    if(n<0){
      contaneg++;
    }
  }
  printf("Quantidade de valores negativos = %d\n",contaneg);
  return 0;
}

