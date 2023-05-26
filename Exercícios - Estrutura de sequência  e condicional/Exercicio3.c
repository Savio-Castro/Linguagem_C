*/Exercícios3-Desenvolverumalgoritmoqueleiaumnúmerointeiroeverifiqueseonúmeroédivisívelpor5epor3aomesmotempo.*/
#include <stdio.h>

int main()
{
   int x;
   
   printf("Digite um numero inteiro ");
   scanf("%d",&x);
   
   if( (x % 5 == 0) && (x % 3 == 0)){
        printf("Esse número e divisivel");
    } 
    else if(( x % 5 != 0) &&  (x % 5 != 0)){
        printf("Esse numero não e divisivel");
    }
    return 0;
}
