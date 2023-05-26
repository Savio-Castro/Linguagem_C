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

printf("As paginas dos livros vão ser: ");
scanf("%d", &pag);

cp=gasto+l*(pag*0.0305);
preco=cp/l;

printf("seu custo de produção vai ser %.2f e o preço que você deve vender ao consumidor è: %.2f\n", cp, preco);

return 0;
}
