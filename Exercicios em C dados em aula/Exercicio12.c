// 12 - Apresentar todos os números divisíveis por 4 que sejam menos que 200.  
#include <stdio.h>

int main(void) {
  for(int i = 1; i < 200; i++){
    if(i % 4 == 0){
      printf("%d ",i);
    }
  }
  return 0;
}

