/*Exercício2-CrieumprogramaemCquerecebaonomeeaidadedeumapessoaecalculeovalordoseuplanodesaúde,baseadonasseguintesregras:*/
#include <stdio.h>

int main()
{
   int idade;
   char nome[20];
   
   printf("Digite o seu nome ");
   gets(nome);
   
   printf("Digite a sua idade ");
   scanf("%d",&idade);
   
   if(idade < 18){
        printf("Bem-vindo(a) %s, conforme sua idade de %d anos o seu plano de saude e R$ 50,00",nome,idade);
    } 
    else if((idade >= 18) &&  (idade <= 40)){
        printf("Ben-vindo(a) %s, conforme sua idade  de %d anos o seu plano de saude e R$ 100,00",nome,idade);
    }
    else if (idade > 40){
        printf("Bem-vindo(a) %s, conforme sua idade de %d anos o seu plano de saude e R$ 150,00",nome,idade);
    }
    return 0;
}

