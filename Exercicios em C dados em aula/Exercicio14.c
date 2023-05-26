// 14 -  Em 2012, um novo recorde mundial foi cravado na famosa competição Nathan's Eating Hot Dog: o campeão, Joey Chesnut, comeu 68 cachorros quentes em 10 minutos, e bateu o seu próprio recorde de 62 cachorros quentes comidos em 2011. A Nathan’s Famous Corporation, no Brooklyn, NY, é responsável pela competição. Eles fazem cachorros quentes deliciosos, conhecidos mundialmente, mas no que diz respeito à matemática, eles são ruins. Eles querem concorrer ao livro dos recordes (Guinness), mas, para isso, precisam preencher um formulário com fatos sobre a competição. Em particular, eles precisam informar o número médio de cachorros quentes comidos pelos participantes durante a competição. Dado o número total de cachorros quentes consumidos e o número total de participantes na competição, você deve escrever um programa que determina o número médio de cachorros quentes comidos por cada participante. Imprimir um número decimal representando a média de cachorros quentes comidos pelos participantes. Se possível limite sua resposta com duas casas decimais.
#include <stdio.h>

int main(void) {
  int total_cachorros_quentes = 68;
  int total_participantes = 1;

  float media_cachorros_quentes = (float) total_cachorros_quentes/total_participantes;

  printf("%.2f\n",media_cachorros_quentes);
  return 0;
}

