//Exercício #6
/*Entrar com 4 números e imprimir a média ponderada,
sabendo-se que os pesos são respectivamente 1, 2, 3 e 4.
A média ponderada é calculada pela fórmula =(nota1 x peso1)
+ (nota2 x peso2) + (nota3 x peso3) + (nota4 x peso4), dividido
pela soma dos pesos.*/

#include <stdio.h>

int main(void) {

  float nota1, nota2, nota3, nota4, media_ponderada;
  int peso1 = 1, peso2 = 2, peso3 = 3 ,peso4 = 4;

  printf("Digite um valor para a nota: ");
  scanf("%f",&nota1);
  printf("\n");
  printf("Digite um valor para a nota: ");
  scanf("%f",&nota2);
  printf("\n");
  printf("Digite um valor para a nota: ");
  scanf("%f",&nota3);
  printf("\n");
  printf("Digite um valor para a nota: ");
  scanf("%f",&nota4);
  printf("\n");
  
  media_ponderada = (nota1*peso1)+(nota2*peso2)+(nota3*peso3)+ (nota4*peso4);
    
  
  printf("A media ponderada dos alunos é %.2f ",media_ponderada);
  
  return 0;
}