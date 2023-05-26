//4–Façaumprogramaondeousuárioforneceoanoeomesmoretornaseeleébissextoounão.Regrasparaanobissexto:Divisívelpor4.Nãopodeserdivisívelpor100.Podeserquesejadivisívelpor400.*/
  
#include <stdio.h>

int main()
{
   int ano;
   
   printf("Digite um ano ");
   scanf("%d",&ano);

  if((ano  % 4 == 0) && (ano % 100 != 0) || (ano  % 400 == 0)){
        printf("O Ano é bissexto");
    } 
    else {
        printf("O ano não é bissexto");
    } 
   
    return 0;
}
