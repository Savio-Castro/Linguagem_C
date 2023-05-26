#include <stdio.h>
int main(){
  printf("Números impares entre 1 e 30\n ");

  for(int i = 1; i <= 30; i++){
    if(i % 2 == 1){
      printf("%d\n", i);
    }
  }
  return 0;
}
