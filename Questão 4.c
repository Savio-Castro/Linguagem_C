#include <stdio.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL,"");

int l, pag;
float gasto, cp, preco;

printf("Quantos livros tu quer: ");
scanf("%d", &l);

printf("Qual o custo fixo: ");
scanf("%f", &gasto);

printf("As paginas dos livros v�o ser: ");
scanf("%d", &pag);

cp=gasto+l*(pag*0.0305);
preco=cp/l;

printf("seu custo de produ��o vai ser %.2f e o pre�o que voc� deve vender ao consumidor �: %.2f\n", cp, preco);

return 0;
}
