#include <stdio.h>

int main(void) 
{
  int valor=6;

  if(valor==10){
    printf("Executei o primeiro IF");
  }
  else if(valor<10){
    printf("Estou no primeiro else if");
  }
  else if(valor>10){
    printf("Estou no segundo else if");
  }

  return 0;
}
