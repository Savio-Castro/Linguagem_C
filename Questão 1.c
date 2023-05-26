#include <stdio.h>
#include <locale.h>

int main (){

setlocale(LC_ALL,"");

int num, num_pos = 0, num_neg = 0;
int soma_pos = 0, soma_neg = 0;

do{

printf("Da um numero ae, digita 0 para parar: ");
scanf("%d", &num);

if(num>0){

    num_pos++;
    soma_pos=soma_pos+num;
}
    else if(num<0){

    num_neg++;
    soma_neg=soma_neg+num;
}

}
while(num != 0);

printf("Tu digitou %d pares e %d impares.\n", num_pos, num_neg);
printf("A soma dos pares é: %d e a soma dos impares é: %d \n", soma_pos, soma_neg);

return 0;
}
