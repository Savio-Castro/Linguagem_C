#include<stdio.h>

#define Peso_Maximo 300

int main(){
  int peso1, peso2, peso3, peso4, peso5, peso_total;

  printf("Informe o peso da primeira pessoa: ");
  scanf("%d", &peso1);
   printf("Informe o peso da segunda pessoa: ");
  scanf("%d", &peso2);
   printf("Informe o peso da terceira pessoa: ");
  scanf("%d", &peso3);
   printf("Informe o peso da quarta pessoa: ");
  scanf("%d", &peso4);
   printf("Informe o peso da quinta pessoa: ");
  scanf("%d", &peso5);

  peso_total = peso1 + peso2 + peso3 + peso4 + peso5;

  if(peso_total > Peso_Maximo){
    printf(" O peso é %d \n",peso_total);
    printf("Peso está acima da segurança");
  } else{
    printf("Podem subir ");
  }
}
