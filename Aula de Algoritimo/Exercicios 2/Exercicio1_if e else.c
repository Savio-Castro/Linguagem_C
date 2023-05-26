#include <stdio.h>

int main(void) 
{
  int sexo;
  float altura,peso_ideal,peso_atual;
  printf("Digite 1 para Masculino ou 2 para Feminino \n");
  scanf("%d",&sexo);
  
  printf("\n");
  printf("Digite a sua altura ");
  scanf("%f",&altura);
  
  printf("\n");
  printf("Digite o seu peso atual ");
  scanf("%f",&peso_atual);
  
  if(sexo==1){
    printf("Sexo Masculino");
     peso_ideal = (72.7 * altura)-58;
        if (peso_atual > peso_ideal){
            printf("\n Peso acima do ideal");
        } else {
            printf("\n Peso normal ou abaixo do ideal \n");
        }
  }
  
  else if(sexo==2){
    printf("Sexo feminino");
    peso_ideal =(62.1* altura)-44.7;
      if (peso_atual > peso_ideal){
            printf("\n Peso acima do ideal");
        } else {
            printf(" \n Peso normal ou abaixo do ideal \n");
        }
    }
 
  return 0;
}
