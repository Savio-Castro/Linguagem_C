// 17 - Construa um programa em que leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela e calcule a multa que uma pessoa vai receber, sabendo que são pagos:
//a. 50 reais se o motorista estiver ultrapassar em até 10km/h a velocidade permitida;
//b. 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida;
//c. 200 reais, se estiver acima de 31km/h da velocidade permitida
#include <stdio.h>
int main(void){
  int vel_max, vel_motorista, diferenca_vel;
  float multa;
  
  printf("Digite a velocidade máxima permitida na avenida: ");
  scanf("%d",&vel_max);
  
  printf("Digite a velocidade que o motorista estava dirigindo: ");
  scanf("%d",&vel_motorista);

  diferenca_vel = vel_motorista - vel_max;

  if(diferenca_vel <= 10){
    multa = 50.0;
  } else if (diferenca_vel <= 30){
    multa = 100.0;
  } else {
    multa = 200.0;
  }

  printf("A velocidade do motorista ultrapassou em %d km/h a velocidade permitida.\n",diferenca_vel);

  if(multa > 0){
    printf("O motorista deve pagar uma multa de R$ %.2f.\n",multa);
  } else{
    printf("O motorista não ultrapassou a velocidade permitida. \n");
  }
  return 0;
} 
